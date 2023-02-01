/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "Dial.h"

//==============================================================================
/**
*/
class OSCAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    OSCAudioProcessorEditor (OSCAudioProcessor&,
    juce::AudioProcessorValueTreeState& state);
    ~OSCAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

    //bool keyPressed(const juce::KeyPress& key) override;


private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    OSCAudioProcessor& audioProcessor;
    Dial volDial;
    Dial freqDial;
    //juce::UndoManager& undoManager;


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (OSCAudioProcessorEditor)
};
