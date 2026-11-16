/* f_0x100ef020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100ef020(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x104df770u)) != 0u)
    {
        edx = rd32(COW_IMG(0x104df770u));
        goto L_100ef030;
    }
    return 0xffffffffu;
L_100ef030: ;
    if (rd32(arg1) != 0u) goto L_100ef040;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x100edea0u), 0);
    t1 = g->ecx;
    t2 = g->edx;
    ecx = t1;
    edx = t2;
L_100ef049: ;
    if (rd32(arg1) == 0u)
    {
        eax = rd32(arg1);
        goto L_100ef098;
    }
    eax = rd32(arg1);
    if (eax == 1u) goto L_100ef05d;
    eax = eax - 1u;
    if (eax != 1u) goto L_100ef0d5;
    return 1u;
L_100ef040: ;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_stdcall(g, COW_IMG(0x100edeb0u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        goto L_100ef093;
    }
    ecx = t4;
    edx = t5;
    goto L_100ef049;
L_100ef05d: ;
    t6 = rd32(edx + 0x13690u);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10115d50u), 2, t6, edx + 0x13698u);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0u)
    {
        wr32(arg1, rd32(arg1) + 1u);
    }
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) != 0xffffffffu) goto L_100ef0d5;
    eax = rd32(COW_IMG(0x104df770u));
L_100ef093: ;
    return 0xffffffffu;
L_100ef098: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x1cu);
    t8 = g->ecx;
    t9 = g->edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), t8, 1, t7);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, 0u);
    t10 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10115a90u), 2, t10, arg2);
    t11 = rd32(arg1) + 1u;
    wr32(arg1, t11);
L_100ef0d5: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ef020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ef020(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
