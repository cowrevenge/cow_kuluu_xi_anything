/* f_0x10009870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10009870(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(self + 0x909u) == 0u) goto L_10009888;
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x909u);
    if (rd8(self + 0x90au) != 0u) goto L_1000989c;
L_10009888: ;
    wr32(arg2, 0xffffffffu);
L_10009892: ;
    return 1u;
L_1000989c: ;
    if (rd32(arg2) != 0u)
    {
        eax = rd32(arg2);
        goto L_100098d3;
    }
    t1 = rd32(self + 0xcu);
    g->edx = arg1;
    t2 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(t2 + 0xe4u), t2, 3, t1, arg1, arg2);
    t3 = g->ecx;
    t4 = g->edx;
    if (rd32(arg2) == 0xffffffffu) goto L_10009892;
    ecx = t3;
    edx = t4;
    t5 = rd32(self + 0xcu);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(t5) + 0xd0u), ecx, 1, t5);
    return 1u;
L_100098d3: ;
    if (eax == 0xffffffffu) goto L_10009892;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10009870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10009870(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
