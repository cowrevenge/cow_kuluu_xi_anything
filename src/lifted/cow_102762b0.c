/* f_0x102762b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102762b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    t1 = rd32(sp0 + 4u) + 0x12cu;
    t2 = rd32(sp0 + 4u);
    wr32(t2, 0x170002u);
    wr32(t2 + 8u, COW_IMG(0x102778c0u));
    wr32(t2 + 0xcu, COW_IMG(0x10276790u));
    wr32(t2 + 0x10u, COW_IMG(0x10276900u));
    wr32(t2 + 0x14u, 0x3f800000u);
    wr32(t2 + 0x11cu, 0xffffffffu);
    wr32(t2 + 0x120u, 0x40a00000u);
    wr32(t2 + 0x124u, 0u);
    wr32(t2 + 0x128u, 0x40093f7du);
    wr32(t2 + 0x13cu, 0u);
    wr32(t2 + 0x144u, 0u);
    wr32(t2 + 0x140u, 0u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t3 = cow_cdecl(g, COW_IMG(0x10274d60u), 5, t1, 0u, 0x3f800000u, 0u, 0u);
    t4 = g->edx;
    wr32(t2 + 0x2d0u, 0u);
    g->ecx = t2 + 0x188u;
    g->esp = sp0 - 0x28u;
    t5 = cow_cdecl(g, COW_IMG(0x1027ebf0u), 1, t2 + 0x188u);
    t6 = g->ecx;
    g->ecx = t6;
    g->edx = t2 + 0x208u;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x1027ebf0u), 1, t2 + 0x208u);
    t7 = g->ecx;
    t8 = g->edx;
    g->eax = t2 + 0x1c8u;
    g->edx = t8;
    g->esp = sp0 - 0x30u;
    t9 = cow_cdecl(g, COW_IMG(0x1027ebf0u), 1, t2 + 0x1c8u);
    t10 = g->edx;
    g->ecx = t2 + 0x148u;
    g->esp = sp0 - 0x34u;
    t11 = cow_cdecl(g, COW_IMG(0x1027ebf0u), 1, t2 + 0x148u);
    t12 = g->ecx;
    wr32(t2 + 0x2acu, 0x42200000u);
    wr32(t2 + 0x2b0u, 0x44200000u);
    wr32(t2 + 0x2b4u, 0x43f00000u);
    wr32(t2 + 0x2bcu, 0x3dcccccdu);
    wr32(t2 + 0x2b8u, 0x447a0000u);
    wr32(t2 + 0x2d4u, 0x280u);
    wr32(t2 + 0x2d8u, 0x1e0u);
    wr32(t2 + 0x2dcu, 0x3f800000u);
    wr32(t2 + 0x2e0u, 0u);
    wr32(t2 + 0x2e4u, 0u);
    wr32(t2 + 0x2e8u, 0u);
    g->ecx = t12;
    g->edx = t2 + 0x2ecu;
    g->esp = sp0 - 0x38u;
    t13 = cow_bridge_indirect(g, COW_IMG(0x1027eb70u), 0u, 17u, (const uint32_t[]){t2 + 0x2ecu, 0x3f800000u, 0u, 0u, 0u, 0u, 0x3f800000u, 0u, 0u, 0u, 0u, 0u, 0xbf800000u, 0u, 0u, 0u, 0u}, g->ecx, g->edx, g->eax, 68u);
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    ebp = t2 + 0x72cu;
    esi = t2;
    edi = t2 + 0x32cu;
    loc_4 = 2u;
L_102763ef: ;
    wr32(sp0 + 4u, 8u);
L_102763f7: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x1027ebf0u), 1, edi);
    t16 = g->ecx;
    t17 = g->edx;
    t18 = rd32(sp0 + 4u);
    wr32(ebp, 0u);
    wr32(sp0 + 4u, t18 - 1u);
    if (t18 != 1u)
    {
        eax = t18 - 1u;
        ecx = t16;
        edx = t17;
        edi = edi + 0x40u;
        goto L_102763f7;
    }
    ecx = t16;
    edx = t17;
    edi = edi + 0x40u;
    if (loc_4 != 1u)
    {
        eax = loc_4 - 1u;
        ebp = ebp + 4u;
        loc_4 = loc_4 - 1u;
        goto L_102763ef;
    }
    wr32(esi + 0x74cu, 0x3f800000u);
    wr32(esi + 0x750u, 0x3f800000u);
    wr8(esi + 0x754u, 0u);
    g->eax = esi + 0x758u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t19 = cow_cdecl(g, COW_IMG(0x10274d60u), 5, esi + 0x758u, 0u, 0u, 0u, 0u);
    t20 = g->edx;
    wr32(esi + 0x768u, 0u);
    wr32(esi + 0x76cu, 0u);
    wr32(esi + 0x770u, 0u);
    wr32(esi + 0x774u, 0u);
    g->ecx = esi + 0x778u;
    g->edx = t20;
    g->esp = sp0 - 0x28u;
    t21 = cow_cdecl(g, COW_IMG(0x10274d60u), 5, esi + 0x778u, 0u, 0u, 0u, 0u);
    t22 = g->ecx;
    t23 = g->edx;
    wr32(esi + 0x788u, 0u);
    wr32(esi + 0x78cu, 0u);
    eax = t21;
    ecx = t22;
    edx = t23;
    ebp = esi + 0x854u;
    edi = esi + 0x794u;
    loc_4 = 2u;
L_10276491: ;
    wr32(sp0 + 4u, 8u);
L_10276499: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10274690u), 4, edi, 0u, 0u, 0u);
    t24 = g->ecx;
    t25 = g->edx;
    t26 = rd32(sp0 + 4u);
    wr32(ebp, 0u);
    wr32(sp0 + 4u, t26 - 1u);
    if (t26 != 1u)
    {
        eax = t26 - 1u;
        ecx = t24;
        edx = t25;
        ebp = ebp + 4u;
        edi = edi + 0xcu;
        goto L_10276499;
    }
    ecx = t24;
    edx = t25;
    ebp = ebp + 4u;
    edi = edi + 0xcu;
    if (loc_4 != 1u)
    {
        eax = loc_4 - 1u;
        loc_4 = loc_4 - 1u;
        goto L_10276491;
    }
    loc_4 = loc_4 - 1u;
    wr32(esi + 0x8dcu, 0x80u);
    wr32(esi + 0x8e0u, 0x80u);
    wr32(esi + 0x898u, 0u);
    wr32(esi + 0x89cu, 1u);
    wr32(esi + 0x8a4u, 0u);
    wr32(esi + 0x8a8u, 1u);
    wr32(esi + 0x8acu, 2u);
    wr32(esi + 0x8a0u, 2u);
    wr32(esi + 0x8d8u, 1u);
    wr32(esi + 0x8e4u, 1u);
    wr32(esi + 0x894u, 0u);
    wr32(esi + 0x8e8u, 1u);
    wr32(esi + 0x8ecu, 0u);
    wr32(esi + 0x8f8u, 0u);
    wr32(esi + 0x8f0u, 0u);
    wr32(esi + 0x8f4u, 0u);
    eax = esi + 0x8b8u;
    ecx = 2u;
L_1027653b: ;
    wr32(eax - 8u, 0xffffffffu);
    wr32(eax, 0xffffffffu);
    wr32(eax + 8u, 0u);
    wr32(eax + 0x10u, 0u);
    wr32(eax + 0x18u, 0u);
    if (ecx != 1u)
    {
        eax = eax + 4u;
        ecx = ecx - 1u;
        goto L_1027653b;
    }
    wr32(esi + 0x8fcu, 0u);
    wr32(esi + 0x900u, 0u);
    wr32(esi + 0x904u, 0u);
    wr32(esi + 0x908u, 0u);
    wr32(esi + 0x90cu, 0u);
    wr32(esi + 0x910u, 0u);
    wr32(esi + 0x914u, 1u);
    wr32(esi + 0x918u, 0u);
    wr32(esi + 0x91cu, 0u);
    wr32(esi + 0x928u, 0u);
    wr32(esi + 0x92cu, 0u);
    wr32(esi + 0x930u, 0u);
    eax = esi + 0x934u;
    ecx = 2u;
L_102765a7: ;
    wr32(eax - 0x14u, 0u);
    wr32(eax, 0u);
    wr32(eax + 0x10u, 0u);
    if (ecx != 1u)
    {
        eax = eax + 4u;
        ecx = ecx - 1u;
        goto L_102765a7;
    }
    wr32(esi + 0x93cu, 0u);
    wr32(esi + 0x940u, 0u);
    wr32(esi + 0x94cu, 0u);
    wr32(esi + 0x950u, 0u);
    wr32(esi + 0x954u, 0u);
    wr32(esi + 0x958u, 0u);
    wr32(esi + 0x95cu, 0u);
    wr32(esi + 0x960u, 0u);
    wr32(esi + 0x964u, 0u);
    eax = esi + 0x970u;
    ecx = 2u;
L_102765f3: ;
    wr32(eax - 8u, 0u);
    wr32(eax, 0u);
    if (ecx != 1u)
    {
        eax = eax + 4u;
        ecx = ecx - 1u;
        goto L_102765f3;
    }
    eax = eax + 4u;
    ecx = ecx - 1u;
    wr32(esi + 0x978u, 0u);
    wr32(esi + 0x97cu, 0u);
    wr32(esi + 0x980u, 0u);
    wr32(esi + 0x984u, 0u);
    wr32(esi + 0x988u, 0u);
    wr32(esi + 0x98cu, 0u);
    wr32(esi + 0x990u, 0u);
    wr32(esi + 0x994u, 0u);
    wr32(esi + 0x998u, 0u);
    wr32(esi + 0x99cu, 0u);
    wr32(esi + 0x9a0u, 0u);
    wr32(esi + 0x9a4u, 0x3c23d70au);
    wr32(esi + 0x9a8u, 0u);
    g->ecx = ecx;
    g->edx = esi + 0x9acu;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10274d60u), 5, esi + 0x9acu, 0u, 0u, 0u, 0u);
    t27 = g->ecx;
    t28 = g->edx;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10274d60u), 5, esi + 0x9bcu, 0u, 0u, 0u, 0u);
    t29 = rd32(esi + 0x2d4u);
    t30 = rd32(esi + 0x2d8u);
    wr32(esi + 0x9ccu, 0x3d4ccccdu);
    wr32(esi + 0x9d0u, 0u);
    wr32(esi + 0x9d4u, 0u);
    wr32(esi + 0x9d8u, 0xffffffffu);
    wr32(esi + 0x9dcu, 0xffffffffu);
    wr32(esi + 0x9e0u, 0u);
    wr32(esi + 0x9e4u, 0u);
    wr32(esi + 0x9e8u, 0u);
    wr32(esi + 0x9ecu, 0u);
    wr32(esi + 0x9f0u, 0u);
    wr32(esi + 0x9f4u, t29);
    wr32(esi + 0x9f8u, t30);
    wr32(esi + 0x9fcu, 0u);
    wr32(esi + 0xa00u, 0u);
    wr32(esi + 0xa04u, 0u);
    wr32(esi + 0xa08u, 0u);
    wr32(esi + 0xa0cu, 0u);
    wr32(esi + 0xa10u, 0u);
    wr32(esi + 0xa14u, 0u);
    eax = esi + 0xa20u;
    ecx = esi + 0xa34u;
    edx = 2u;
L_10276706: ;
    wr32(eax, 0xffffffffu);
    wr32(eax + 4u, 0xffffffffu);
    wr32(ecx, 0u);
    if (edx != 1u)
    {
        eax = eax + 8u;
        ecx = ecx + 4u;
        edx = edx - 1u;
        goto L_10276706;
    }
    wr32(esi + 0xa30u, 0u);
    wr32(esi + 0xa3cu, 0u);
    wr32(esi + 0xa48u, 0u);
    wr32(esi + 0xaecu, 0u);
    wr32(esi + 0xb18u, 0u);
    eax = esi + 0xc9cu;
    ecx = 0x10u;
L_1027673f: ;
    wr32(eax - 0x40u, 0xffffffffu);
    wr32(eax, 0xffffffffu);
    wr32(eax + 0x80u, 0u);
    wr32(eax + 0x100u, 0u);
    wr32(eax + 0x140u, 0u);
    wr32(eax - 0x180u, 0u);
    wr32(eax - 0x140u, 0u);
    wr32(eax - 0xc0u, 0u);
    wr32(eax - 0x100u, 0u);
    wr32(eax - 0x80u, 0u);
    if (ecx != 1u)
    {
        eax = eax + 4u;
        ecx = ecx - 1u;
        goto L_1027673f;
    }
    wr32(esi + 0xe1cu, 0u);
    wr32(esi + 0xe20u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102762b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102762b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
