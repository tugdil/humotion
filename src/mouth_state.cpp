/*
* This file is part of humotion
*
* Copyright(c) sschulz <AT> techfak.uni-bielefeld.de
* http://opensource.cit-ec.de/projects/humotion
*
* This file may be licensed under the terms of the
* GNU Lesser General Public License Version 3 (the ``LGPL''),
* or (at your option) any later version.
*
* Software distributed under the License is distributed
* on an ``AS IS'' basis, WITHOUT WARRANTY OF ANY KIND, either
* express or implied. See the LGPL for the specific language
* governing rights and limitations.
*
* You should have received a copy of the LGPL along with this
* program. If not, go to http://www.gnu.org/licenses/lgpl.html
* or write to the Free Software Foundation, Inc.,
* 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
*
* The development of this software was supported by the
* Excellence Cluster EXC 277 Cognitive Interaction Technology.
* The Excellence Cluster EXC 277 is a grant of the Deutsche
* Forschungsgemeinschaft (DFG) in the context of the German
* Excellence Initiative.
*/

#include <stdio.h>

#include "humotion/mouth_state.h"

using humotion::MouthState;

MouthState::MouthState() {
    opening_left = 0.0;
    opening_center = 0.0;
    opening_right = 0.0;

    position_left = 0.0;
    position_center = 0.0;
    position_right = 0.0;
}

MouthState::~MouthState() {
}

void MouthState::dump() {
    // dump values to stdout
    printf("> MOUTH STATE: %4.2f (%4.2f) %4.2f (%4.2f) %4.2f (%4.2f)  [= pos (opening)]\n",
           position_left, opening_left,
           position_center, opening_center,
           position_right, opening_right);
}
