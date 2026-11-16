/* f_0x100eef80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100eef80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1) == 0u) goto L_100eefc8;
    eax = rd32(arg1);
    if (eax == 1u) goto L_100eef9d;
    eax = eax - 1u;
    if (eax != 1u) goto L_100ef017;
    return 1u;
L_100eef9d: ;
    t1 = rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u);
    g->eax = rd32(COW_IMG(0x104df770u));
    t2 = rd32(COW_IMG(0x104df770u));
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10310018u), 1, t1);
    if (t3 == 0u) goto L_100ef017;
    eax = t3;
    sf = (int32_t)t3 < 0;
    if (!sf) goto L_100ef015;
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, eax);
    return 0xffffffffu;
L_100eefc8: ;
    t4 = rd32(COW_IMG(0x104df770u));
    wr32(t4 + 0x136acu, 0u);
    g->eax = t4;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x1bu);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    g->esp = sp0 - 0xcu;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), t6, 1, t5);
    t9 = g->ecx;
    t10 = g->edx;
    g->esp = sp0 - 4u;
    t11 = cow_stdcall(g, COW_IMG(0x1031000du), 0);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136a8u, t11);
    if ((int32_t)rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u) >= 0) goto L_100ef015;
    eax = rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u);
    ecx = rd32(COW_IMG(0x104df770u));
    wr32(ecx + 0x136acu, eax);
    return 0xffffffffu;
L_100ef015: ;
    wr32(arg1, rd32(arg1) + 1u);
L_100ef017: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100eef80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100eef80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
