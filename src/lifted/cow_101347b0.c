/* f_0x101347b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101347b0(Guest* g)
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
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(sp0 + 8u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(sp0 + 8u);
        goto L_101347d4;
    }
    if (rd32(rd32(COW_IMG(0x10578170u)) + 8u) != 0u)
    {
        eax = rd32(COW_IMG(0x10578170u));
        goto L_101347d4;
    }
    eax = rd32(COW_IMG(0x10578170u));
    wr8(rd32(COW_IMG(0x105781b8u)) + 0x14eu, 1u);
    edx = in_edx;
L_101347e1: ;
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x1057876cu));
    }
    else
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        g->esp = sp0 - 4u;
        t2 = cow_call_regs(g, COW_IMG(0x101597f0u), eax, ecx, edx, 1, 0);
        ecx = t2;
    }
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        loc_4 = ecx;
        goto L_10134983;
    }
    loc_4 = ecx;
    if (rd32(COW_IMG(0x105781b8u)) == 0u) goto L_10134983;
    eax = rd32(COW_IMG(0x105781b8u));
    if (rd32(eax + 0x74u) != 0u) goto L_10134983;
    edx = rd32(eax + 0x74u);
    if (arg1 == 0u)
    {
        if (ecx == 0u)
        {
            ebp = 0u;
        }
        else
        {
            ebp = rd32(ecx + 4u);
        }
    }
    else
    {
        ebp = arg1;
    }
    if (rd32(COW_IMG(0x105781c4u)) != 0u) goto L_10134844;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x100e55f0u), 0);
    t3 = g->edx;
    edx = t3;
L_10134863: ;
    if (ebp == 0u) goto L_10134983;
    wr8(sp0 + 8u, 0u);
    edi = 0u;
L_10134873: ;
    if (rd32(COW_IMG(0x10480af0u) + edi * 4u) == 0u) goto L_1013488a;
    ecx = rd32(COW_IMG(0x10480af0u) + edi * 4u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x1008b380u), ecx, 1, ebp);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 != 0u)
    {
        eax = t9;
        ecx = t10;
        esi = t9;
        goto L_101348c1;
    }
    edx = t11;
L_1013488a: ;
    if ((int32_t)(edi + 1u) < 1024)
    {
        edi = edi + 1u;
        goto L_10134873;
    }
    edi = 0x400u;
L_10134898: ;
    if (rd32(COW_IMG(0x10480af0u) + edi * 4u) == 0u) goto L_101348af;
    ecx = rd32(COW_IMG(0x10480af0u) + edi * 4u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t12 = cow_thiscall(g, COW_IMG(0x1008b380u), ecx, 1, ebp);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 != 0u)
    {
        eax = t12;
        ecx = t13;
        esi = t12;
        goto L_101348bc;
    }
    edx = t14;
L_101348af: ;
    if ((int32_t)(edi + 1u) < 2304)
    {
        edi = edi + 1u;
        goto L_10134898;
    }
    esi = 0u;
L_10134935: ;
    if (esi != 0u) goto L_10134983;
    esi = COW_IMG(0x10481af0u);
L_1013493f: ;
    if (rd32(esi) == 0u) goto L_1013494f;
    ecx = rd32(esi);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t26 = cow_thiscall(g, COW_IMG(0x1008b380u), ecx, 1, ebp);
    t27 = g->edx;
    if (t26 != 0u)
    {
        eax = t26;
        goto L_1013495e;
    }
    edx = t27;
L_1013494f: ;
    if ((int32_t)(esi + 4u) < (int32_t)COW_IMG(0x10482ef0u))
    {
        esi = esi + 4u;
        goto L_1013493f;
    }
    return;
L_101347d4: ;
    t1 = rd32(COW_IMG(0x105781b8u));
    wr8(t1 + 0x14eu, 0u);
    edx = t1;
    goto L_101347e1;
L_10134844: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_stdcall(g, COW_IMG(0x100e56e0u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (ebp != t4)
    {
        edx = t6;
        goto L_10134863;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_stdcall(g, COW_IMG(0x100dc130u), 0);
    t8 = g->edx;
    if (t7 < rd32(COW_IMG(0x105781c4u)) + 2u) goto L_10134983;
    edx = t8;
    goto L_10134863;
L_101348bc: ;
    wr8(sp0 + 8u, 1u);
L_101348c1: ;
    if ((rd32(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0x13cu) & 0x40u) != 0x40u)
    {
        edx = rd32(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0x13cu) & 0x40u;
        edi = rd32(COW_IMG(0x10480af0u) + edi * 4u);
        goto L_101348fa;
    }
    edx = rd32(rd32(COW_IMG(0x10480af0u) + edi * 4u) + 0x13cu) & 0x40u;
    edi = rd32(COW_IMG(0x10480af0u) + edi * 4u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t15 = cow_thiscall_cdecl(g, COW_IMG(0x10133a40u), ecx, 1, edi);
    t16 = g->ecx;
    t17 = g->edx;
    if ((uint8_t)t15 != 0u)
    {
        eax = t15;
        edx = t17;
        goto L_101348fa;
    }
    ecx = t16;
    edx = t17;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x1007bf30u), loc_4, g->ecx, g->edx, 1, 5, loc_4, 2u, 0u, 0u, 0u);
    t18 = g->edx;
    edx = t18;
    goto L_10134935;
L_101348fa: ;
    if (rd8(sp0 + 8u) != 0u) goto L_10134910;
    if (!(rd32(edi + 0x120u) >> 0xdu & 1u)) goto L_10134935;
L_10134910: ;
    t19 = rd32(esi + 4u);
    g->ecx = rd32(esi);
    g->edx = arg3;
    t20 = rd32(esi);
    g->esp = sp0 - 0x10u;
    t21 = cow_cdecl(g, COW_IMG(0x100e5660u), 3, t20, t19, arg3);
    t22 = g->ecx;
    t23 = g->edx;
    g->edx = t23;
    t24 = cow_stdcall(g, COW_IMG(0x100dc130u), 0);
    t25 = g->edx;
    wr32(COW_IMG(0x105781c4u), t24);
    wr8(COW_IMG(0x105781c0u), 0u);
    edx = t25;
    goto L_10134935;
L_1013495e: ;
    t28 = rd32(eax + 4u);
    g->ecx = t28;
    g->edx = rd32(eax);
    t29 = rd32(eax);
    g->esp = sp0 - 0xcu;
    t30 = cow_cdecl(g, COW_IMG(0x100e5660u), 3, t29, t28, arg3);
    t31 = g->ecx;
    t32 = g->edx;
    t33 = cow_stdcall(g, COW_IMG(0x100dc130u), 0);
    wr32(COW_IMG(0x105781c4u), t33);
    wr8(COW_IMG(0x105781c0u), 0u);
L_10134983: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101347b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101347b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
