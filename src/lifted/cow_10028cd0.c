/* f_0x10028cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10028cd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x104570ecu)) != 0u) goto L_10028d8e;
    eax = rd32(sp0 + 4u);
    edx = in_edx;
    esi = arg2;
L_10028ceb: ;
    if (rd32(esi + 4u) != 1u) goto L_10028cfc;
    if ((rd8(esi + 0x18u) & 1u) == 1u)
    {
        edx = (edx & 0xffffff00u) | (rd8(esi + 0x18u) & 1u);
        goto L_10028d08;
    }
    edx = (edx & 0xffffff00u) | (rd8(esi + 0x18u) & 1u);
L_10028cfc: ;
    if (rd32(esi + 0xcu) != eax)
    {
        esi = rd32(esi + 0xcu);
        goto L_10028ceb;
    }
    return;
L_10028d08: ;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_thiscall(g, COW_IMG(0x10028b90u), esi, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x10028850u), 3, t1, eax, arg2);
    t5 = g->edx;
    if (t4 == 0u) goto L_10028e47;
    edx = t5;
    edi = t4;
    if (edi > esi)
    {
        t6 = 1u - rd32(COW_IMG(0x104570ecu));
        wr32(COW_IMG(0x104570ecu), t6);
    }
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x10028b90u), esi, 0);
    t8 = rd32(esi + 0x20u);
    wr32(sp0 + 4u, t7);
    cow_thiscall(g, rd32(t8 + 0x10u), esi + 0x20u, 1, edi + 0x20u);
    t9 = rd32(esi + 0x1cu);
    t10 = rd32(sp0 + 4u);
    wr32(edi + 0x1cu, t9);
    if (t10 - 1u < 0x20u)
    {
        eax = t9;
        ebx = edi + 0x20u;
        ebp = esi + 0x20u;
    }
    else
    {
        ecx = t10 - 1u;
        ebx = edi + 0x20u;
        ebp = esi + 0x20u;
        wr32(sp0 + 4u, ecx - 0x1fu);
        eax = ecx + edi;
        ecx = ecx - 0x1fu;
        edx = esi - edi;
L_10028d78: ;
        wr8(eax, rd8(eax + edx));
        t11 = rd32(sp0 + 4u) - 1u;
        t12 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t11);
        if (t12 != 1u)
        {
            eax = eax - 1u;
            ecx = t11;
            goto L_10028d78;
        }
        eax = eax - 1u;
    }
L_10028e2e: ;
    g->eax = eax;
    g->edx = rd32(ebx);
    t26 = rd32(ebx);
    g->esp = sp0 - 0x10u;
    t27 = cow_thiscall(g, rd32(t26 + 0x14u), ebx, 1, ebp);
    t28 = g->ecx;
    t29 = g->edx;
    cow_cdecl(g, COW_IMG(0x10028ac0u), 1, esi);
    t30 = (rd32(edi + 0x18u) & 0xffffff00u) | (uint8_t)(rd32(edi + 0x18u) | 1u);
    wr32(edi + 0x18u, t30);
L_10028e47: ;
    return;
L_10028d8e: ;
    t13 = rd32(sp0 + 4u);
    ecx = t13;
    edx = in_edx;
    esi = t13;
L_10028d98: ;
    if (rd32(esi + 4u) != 1u) goto L_10028da9;
    if ((rd8(esi + 0x18u) & 1u) == 1u)
    {
        edx = (edx & 0xffffff00u) | (rd8(esi + 0x18u) & 1u);
        goto L_10028db5;
    }
    edx = (edx & 0xffffff00u) | (rd8(esi + 0x18u) & 1u);
L_10028da9: ;
    if (rd32(esi + 8u) != arg2)
    {
        esi = rd32(esi + 8u);
        goto L_10028d98;
    }
    return;
L_10028db5: ;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t14 = cow_thiscall(g, COW_IMG(0x10028b90u), esi, 0);
    t15 = g->ecx;
    t16 = g->edx;
    g->edx = t16;
    g->esp = sp0 - 0x14u;
    t17 = cow_cdecl(g, COW_IMG(0x10028930u), 3, t14, ecx, arg2);
    t18 = g->edx;
    if (t17 == 0u) goto L_10028e47;
    edx = t18;
    edi = t17;
    if (edi < esi)
    {
        t19 = 1u - rd32(COW_IMG(0x104570ecu));
        wr32(COW_IMG(0x104570ecu), t19);
    }
    g->esp = sp0 - 0x10u;
    t20 = cow_thiscall(g, COW_IMG(0x10028b90u), esi, 0);
    t21 = rd32(esi + 0x20u);
    wr32(sp0 + 4u, t20);
    cow_thiscall(g, rd32(t21 + 0x10u), esi + 0x20u, 1, edi + 0x20u);
    t22 = rd32(esi + 0x1cu);
    t23 = rd32(sp0 + 4u);
    wr32(edi + 0x1cu, t22);
    if (t23 - 1u < 0x20u)
    {
        eax = t22;
        ebx = edi + 0x20u;
        ebp = esi + 0x20u;
    }
    else
    {
        ecx = t23 - 1u;
        ebx = edi + 0x20u;
        ebp = esi + 0x20u;
        wr32(sp0 + 4u, ecx - 0x1fu);
        eax = ecx + edi;
        ecx = ecx - 0x1fu;
        edx = esi - edi;
L_10028e1d: ;
        wr8(eax, rd8(eax + edx));
        t24 = rd32(sp0 + 4u) - 1u;
        t25 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t24);
        if (t25 != 1u)
        {
            eax = eax - 1u;
            ecx = t24;
            goto L_10028e1d;
        }
        eax = eax - 1u;
    }
    goto L_10028e2e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10028cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10028cd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
