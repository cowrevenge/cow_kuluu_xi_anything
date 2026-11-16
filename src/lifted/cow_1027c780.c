/* f_0x1027c780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1027c780(Guest* g)
{
    double d21;
    double d29;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_4;
    double loc_8_f;
    uint32_t loc_c;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x20u, t1);
    g->esp = sp0 - 0x1cu;
    t2 = cow_cdecl(g, COW_IMG(0x1027c6e0u), 1, t1);
    t3 = (uint32_t)((int32_t)((t2 + 1u) * t2 - (uint32_t)((int32_t)((t2 + 1u) * t2) >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x14u, t3);
    if ((uint32_t)((int32_t)((t2 + 1u) * t2 - (uint32_t)((int32_t)((t2 + 1u) * t2) >> 0x1fu)) >> 1u) != 0u)
    {
        ecx = t2;
        edx = (uint32_t)((int32_t)((t2 + 1u) * t2) >> 0x1fu);
        esi = t1;
        loc_14 = t3;
    }
    else
    {
        ecx = t2;
        edx = (uint32_t)((int32_t)((t2 + 1u) * t2) >> 0x1fu);
        esi = t1;
        wr32(sp0 - 0x14u, 1u);
        loc_14 = 1u;
    }
    wr32(sp0 - 0x20u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x1027c8d0u), 3, esi, in_esi, in_ebx);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 4u, t4);
    if (t4 != 0u)
    {
        ecx = t5;
        edx = t6;
        ebx = t4;
        loc_4 = t4;
        goto L_1027c7e9;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    wr32(sp0 - 0x20u, 0x330u);
    wr32(sp0 - 0x24u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x28u, COW_IMG(0x103b27fcu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103b40ecu));
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x2cu, COW_IMG(0x103b44ccu));
    g->edx = t9;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b44ccu), COW_IMG(0x103b27fcu));
    t10 = g->edx;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edx = t10;
    return 0u;
L_1027c7e9: ;
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0x28u, 0x334u);
    wr32(sp0 - 0x2cu, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, ebx + 1u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t11 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, ebx + 1u, 4u, COW_IMG(0x103b40ecu), 0x334u, in_edi);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0xcu, t11);
    if ((int32_t)rd32(esi + 0x28u) <= 0)
    {
        eax = rd32(esi + 0x28u);
        ecx = t12;
        edx = t13;
        edi = 0u;
        loc_c = t11;
    }
    else
    {
        eax = rd32(esi + 0x28u);
        loc_c = t11;
        wr32(sp0 + 4u, 0u);
        ebx = 0u;
        ebp = 0u;
        edi = 0u;
L_1027c81c: ;
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        t14 = rd32(esi + 0x24u) + rd32(sp0 + 4u);
        wr32(sp0 - 0x2cu, t14);
        g->ecx = rd32(sp0 + 4u);
        t15 = rd32(sp0 + 4u);
        g->esp = sp0 - 0x24u;
        cow_cdecl(g, COW_IMG(0x10291760u), 2, t14, sp0 - 0x10u);
        t16 = g->ecx;
        if (rd32(sp0 - 0x10u) == 0u)
        {
            ecx = t16;
        }
        else
        {
            ecx = t16;
            edx = rd32(sp0 - 0x10u);
            t17 = ebx + rd32(esi + 0x20u);
            wr32(sp0 - 0x28u, t17);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            t18 = cow_cdecl(g, COW_IMG(0x1027c6c0u), 1, t17);
            t19 = g->ecx;
            t20 = g->edx;
            wr32(sp0 - 8u, t18);
            d21 = (double)(float)fr(g, fr(g, (double)(int32_t)t18 / (double)(int32_t)rd32(sp0 - 0x14u)) * (double)rdf32(sp0 + 8u));
            wrf32(sp0 - 8u, (float)d21);
            if ((int32_t)t20 <= 0)
            {
                ecx = t19;
                goto L_1027c877;
            }
            eax = 0u;
            loc_8_f = d21;
L_1027c863: ;
            t22 = rd32(sp0 - 0xcu);
            wrf32(edi * 4u + t22, (float)loc_8_f);
            if ((int32_t)(eax + 1u) < (int32_t)rd32(sp0 - 0x10u))
            {
                eax = eax + 1u;
                edi = edi + 1u;
                goto L_1027c863;
            }
            ecx = t22;
            edi = edi + 1u;
        }
L_1027c877: ;
        t23 = rd32(sp0 + 4u) + 0x9cu;
        t24 = rd32(esi + 0x28u);
        wr32(sp0 + 4u, t23);
        if ((int32_t)(ebp + 1u) < (int32_t)t24)
        {
            eax = t24;
            ebx = ebx + 0xf8u;
            ebp = ebp + 1u;
            goto L_1027c81c;
        }
        eax = t24;
        edx = t23;
        ebx = rd32(sp0 - 4u);
    }
    if (edi != ebx)
    {
        wr32(sp0 - 0x28u, 0x341u);
        wr32(sp0 - 0x2cu, COW_IMG(0x103b40ecu));
        wr32(sp0 - 0x30u, COW_IMG(0x103b27fcu));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t25 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103b40ecu));
        t26 = g->ecx;
        t27 = g->edx;
        wr32(sp0 - 0x34u, COW_IMG(0x103b44a4u));
        g->edx = t27;
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b44a4u), COW_IMG(0x103b27fcu));
        t28 = g->edx;
        edx = t28;
    }
    d29 = (double)rdf32(sp0 + 8u);
    wrf32(edi * 4u + loc_c, (float)d29);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return loc_c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027c780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027c780(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
