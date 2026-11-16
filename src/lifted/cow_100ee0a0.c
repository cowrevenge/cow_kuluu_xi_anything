/* f_0x100ee0a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100ee0a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104df770u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x104df770u));
        goto L_100ee0b0;
    }
    return 0xffffffffu;
L_100ee0b0: ;
    if (rd32(arg1) > 4u) goto L_100ee101;
    eax = rd32(arg1);
    t1 = rd32(COW_IMG(0x100ee148u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x100ee0c2u: goto L_100ee0c2;
    case 0x100ee105u: goto L_100ee105;
    case 0x100ee12bu: goto L_100ee12b;
    case 0x100ee135u: goto L_100ee135;
    case 0x100ee13fu: goto L_100ee13f;
    default: rt_fatal(g, COW_IMG(0x100ee0bbu), "switch");
    }
    return 0;
L_100ee0c2: ;
    wr32(ecx + 0x136acu, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 9u);
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), t5, 1, t4);
    t8 = g->ecx;
    t9 = g->edx;
    g->esp = sp0 - 4u;
    t10 = cow_stdcall(g, COW_IMG(0x1030ffcbu), 0);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136a8u, t10);
    if ((int32_t)rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u) < 0)
    {
        eax = rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u);
        ecx = rd32(COW_IMG(0x104df770u));
        goto L_100ee120;
    }
L_100ee0ff: ;
    wr32(arg1, rd32(arg1) + 1u);
L_100ee101: ;
    return 0u;
L_100ee105: ;
    t2 = rd32(ecx + 0x136a8u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x1030ffd6u), 1, t2);
    if (t3 == 0u) goto L_100ee101;
    eax = t3;
    sf = (int32_t)t3 < 0;
    if (!sf) goto L_100ee0ff;
    ecx = rd32(COW_IMG(0x104df770u));
L_100ee120: ;
    wr32(ecx + 0x136acu, eax);
    return 0xffffffffu;
L_100ee12b: ;
    wr32(arg1, 3u);
    return 0u;
L_100ee135: ;
    wr32(arg1, 4u);
    return 0u;
L_100ee13f: ;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ee0a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ee0a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
