/* f_0x101b8dc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101b8dc0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int8_t)arg1 - 0x64u > 5u) goto L_101b8e3c;
    t1 = rd32(COW_IMG(0x101b8e50u) + (uint32_t)(int8_t)arg1 * 4u - 0x190u);
    switch (t1 - RD)
    {
    case 0x101b8dd4u: goto L_101b8dd4;
    case 0x101b8deeu: goto L_101b8dee;
    case 0x101b8e08u: goto L_101b8e08;
    case 0x101b8e22u: goto L_101b8e22;
    case 0x101b8e3cu: goto L_101b8e3c;
    default: rt_fatal(g, COW_IMG(0x101b8dcdu), "switch");
    }
    return 0;
L_101b8dd4: ;
    g->esp = sp0;
    t5 = cow_call_regs(g, COW_IMG(0x10129c70u), g->eax, g->ecx, in_edx, 1, 1, 0xa0u);
    return (t5 & 0xffffffu) | 0x7f000000u;
L_101b8dee: ;
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x10129c70u), g->eax, g->ecx, in_edx, 1, 1, 0x9eu);
    return (t4 & 0xffffffu) | 0x7f000000u;
L_101b8e08: ;
    g->esp = sp0;
    t3 = cow_call_regs(g, COW_IMG(0x10129c70u), g->eax, g->ecx, in_edx, 1, 1, 0x9fu);
    return (t3 & 0xffffffu) | 0x7f000000u;
L_101b8e22: ;
    g->esp = sp0;
    t2 = cow_call_regs(g, COW_IMG(0x10129c70u), g->eax, g->ecx, in_edx, 1, 1, 0xcfu);
    return (t2 & 0xffffffu) | 0x7f000000u;
L_101b8e3c: ;
    return 0x7f808080u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b8dc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b8dc0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
