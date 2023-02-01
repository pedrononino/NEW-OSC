/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "MyColours.h"
#include "ParamIDs.h"



//==============================================================================
OSCAudioProcessorEditor::OSCAudioProcessorEditor (OSCAudioProcessor& p, juce::AudioProcessorValueTreeState& state)
    : AudioProcessorEditor(&p), audioProcessor(p),
    freqDial(*state.getParameter(ParamIDs::freq))
    
{
    setSize (440, 280);
}

OSCAudioProcessorEditor::~OSCAudioProcessorEditor()
{
}

//==============================================================================
void OSCAudioProcessorEditor::paint (juce::Graphics& g)
{
    g.fillAll(MyColours::black);
}

void OSCAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}

