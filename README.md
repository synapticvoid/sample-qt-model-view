# sample-qt-model-view
The simplest implementation of the Qt Model / View pattern to understand how it's working.

![Application screenshot](res/model-view-read-countries.png?raw=true "Application screenshot")

No fancy feature of the Model / View is used. Only the bare minimum:
* Feed countries (Name, Capital, Flag) from a `QAbstractListModel`
* Display the list of countries in a `QListView`
* Update a custom Widget displaying the currently selected Country
