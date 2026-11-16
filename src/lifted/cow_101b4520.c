/* f_0x101b4520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_101b4520(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = cow_cdecl(g, COW_IMG(0x101b4450u), 2, (uint16_t)arg1, 0u);
    if ((uint8_t)t1 != 0xa5u)
    {
        eax = t1;
        goto L_101b453b;
    }
    eax = t1;
    return (eax & 0xffffff00u) | 0x5cu;
L_101b453b: ;
    if ((int8_t)eax < -80) goto L_101b4543;
    if ((int8_t)eax <= -33) goto L_101b4563;
L_101b4543: ;
    if ((int8_t)eax < -95) goto L_101b454b;
    if ((int8_t)eax <= -81) goto L_101b4563;
L_101b454b: ;
    if ((int8_t)eax < 1) goto L_101b4553;
    if ((int8_t)eax <= 28) goto L_101b4563;
L_101b4553: ;
    if ((int8_t)eax < -32) goto L_101b455b;
    if ((int8_t)eax <= -1) goto L_101b4563;
L_101b455b: ;
    if ((uint8_t)eax == 0x8cu) goto L_101b4563;
    if ((uint8_t)eax != 0x9cu) goto L_101b4565;
L_101b4563: ;
    eax = eax & 0xffffff00u;
L_101b4565: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b4520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b4520(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
