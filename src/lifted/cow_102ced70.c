/* f_0x102ced70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_102ced70(Guest* g)
{
    uint32_t al_m1114;
    uint32_t al_m1118;
    uint32_t al_m111c;
    uint32_t al_m1120;
    uint32_t al_m1124;
    uint32_t al_m1128;
    uint32_t al_m112c;
    uint32_t eax;
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
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff0u;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 4464u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x113cu, in_esi);
    wr32(sp1 - 0x1140u, in_edi);
    wr32(sp1 - 0x1000u, 0u);
    edi = sp1 - 0xffcu;
    eax = 0u;
    ecx = 0x3ffu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd32(arg2) == 0u) goto L_102cedcf;
    t1 = rd8(rd32(arg1 + 0x3cu) + 1u);
    t2 = rd32(arg1 + 0x3cu);
    wr32(arg1 + 0x40u, 0x10u);
    if ((t1 & 0xcu) == 0xcu)
    {
        eax = t1;
        ecx = t2;
        edx = t1 & 0xcu;
        goto L_102cee0a;
    }
    t3 = (rd32(arg1 + 0x44u) & 0xffffff00u) | (uint8_t)(rd32(arg1 + 0x44u) | 2u);
    wr32(arg1 + 0x44u, t3);
    return;
L_102cedcf: ;
    t4 = rd8(arg3 + rd32(arg1 + 0x3cu));
    wr32(sp1 - 0x1128u, t4);
    t5 = arg3 * 8u + 8u;
    wr32(arg1 + 0x40u, t5);
    if ((t4 & 0xfcu) == 0xa0u)
    {
        edx = t5;
        al_m1128 = t4;
        goto L_102cee03;
    }
L_102cedf6: ;
    wr32(arg1 + 0x44u, rd32(arg1 + 0x44u) | 2u);
    return;
L_102cee03: ;
    eax = al_m1128;
    ecx = arg1;
L_102cee0a: ;
    wr32(sp1 - 0x1128u, eax & 3u);
    wr32(sp1 - 0x1118u, 0u);
    wr32(sp1 - 0x112cu, 0u);
    wr32(sp1 - 0x1124u, sp1 - 0x10fcu);
    wr32(sp1 - 0x111cu, 0x100u);
    esi = 0u;
    al_m1128 = eax & 3u;
    eax = sp1 - 0x10fcu;
    al_m1118 = 0u;
    al_m1124 = sp1 - 0x10fcu;
    al_m111c = 0x100u;
L_102cee2b: ;
    wr32(sp1 - 0x1144u, 3u);
    wr32(sp1 - 0x1148u, arg1);
    g->eax = eax;
    g->esp = sp1 - 0x1134u;
    t6 = cow_cdecl(g, COW_IMG(0x102cf2c0u), 5, arg1, 3u, in_edi, in_esi, rd32(sp1 - 0x1138u));
    wr32(sp1 - 0x1114u, t6);
    wr32(sp1 - 0x1120u, 0u);
    if (t6 == 0u)
    {
        al_m1114 = t6;
        al_m1120 = 0u;
        goto L_102ceeb3;
    }
    al_m1114 = t6;
    t7 = rd32(sp1 - 0x111cu);
    wr32(sp1 - 0x112cu, t7);
    ecx = t7;
    esi = rd32(arg1 + 0x40u);
    edi = rd32(sp1 - 0x1124u);
    al_m1120 = 0u;
    al_m112c = t7;
L_102cee55: ;
    wr32(sp1 - 0x1144u, 0xcu);
    wr32(sp1 - 0x1148u, esi);
    t8 = rd32(arg1 + 0x3cu);
    wr32(sp1 - 0x114cu, t8);
    g->esp = sp1 - 0x1138u;
    t9 = cow_cdecl(g, COW_IMG(0x102cf280u), 5, t8, esi, 0xcu, rd32(sp1 - 0x1140u), rd32(sp1 - 0x113cu));
    wr32(edi, t9);
    wr32(sp1 - 0x1150u, 8u);
    wr32(sp1 - 0x1154u, esi + 4u);
    t10 = rd32(arg1 + 0x3cu);
    wr32(sp1 - 0x1158u, t10);
    g->esp = sp1 - 0x1144u;
    t11 = cow_cdecl(g, COW_IMG(0x102cf280u), 5, t10, esi + 4u, 8u, rd32(sp1 - 0x114cu), rd32(sp1 - 0x1148u));
    t12 = rd32(sp1 - 0x1120u);
    wr32(edi - 4u, t11 & 0xf8u);
    if (t12 == 0u)
    {
        ecx = t12;
        esi = esi + 9u;
        goto L_102cee97;
    }
    eax = t11 & 0xf8u;
    ecx = t12;
    esi = esi + 9u;
    if ((int32_t)rd32(edi - 0xcu) >= (int32_t)eax) goto L_102cedf6;
L_102cee97: ;
    wr32(sp1 - 0x1120u, ecx + 1u);
    if ((int32_t)(ecx + 1u) < (int32_t)rd32(sp1 - 0x1114u))
    {
        edi = edi + 8u;
        al_m1120 = ecx + 1u;
        ecx = ecx + 1u;
        goto L_102cee55;
    }
    al_m1120 = ecx + 1u;
    wr32(arg1 + 0x40u, esi);
    esi = rd32(sp1 - 0x1118u);
L_102ceeb3: ;
    wr32(al_m1120 * 8u + esi * 0x40u + sp1 - 0x10fcu, 4u);
    wr32(al_m1120 * 8u + esi * 0x40u + sp1 - 0x1100u, 0xffu);
    wr32(sp1 - 0x1118u, esi + 1u);
    t13 = rd32(sp1 - 0x111cu) + 0x100u;
    wr32(sp1 - 0x111cu, t13);
    t14 = rd32(sp1 - 0x1124u) + 0x40u;
    wr32(sp1 - 0x1124u, t14);
    if ((int32_t)(esi + 1u) <= (int32_t)rd32(sp1 - 0x1128u))
    {
        eax = rd32(sp1 - 0x1128u);
        ecx = 0xffu;
        edx = 4u;
        al_m1118 = esi + 1u;
        esi = esi + 1u;
        al_m1124 = t14;
        al_m111c = t13;
        goto L_102cee2b;
    }
    eax = rd32(sp1 - 0x1128u);
    al_m1118 = esi + 1u;
    esi = esi + 1u;
    al_m111c = t13;
    al_m1124 = t14;
    if (esi == 1u) goto L_102cef03;
    esi = esi - 1u;
    if (esi == 1u) goto L_102cef11;
    esi = esi - 1u;
    if (esi == 1u) goto L_102cef1f;
L_102cef2d: ;
    wr32(sp1 - 0x1144u, 5u);
    wr32(sp1 - 0x1148u, arg1);
    g->eax = eax;
    g->ecx = 0xffu;
    g->esp = sp1 - 0x1134u;
    t15 = cow_cdecl(g, COW_IMG(0x102cf2c0u), 5, arg1, 5u, rd32(sp1 - 0x1140u), rd32(sp1 - 0x113cu), rd32(sp1 - 0x1138u));
    t16 = g->ecx;
    if (t15 == 0u)
    {
        eax = t15;
        ecx = t16;
    }
    else
    {
        eax = t15;
        wr32(sp1 - 0x1144u, sp1 - 0x1000u);
        t17 = rd32(sp1 - 0x112cu);
        wr32(sp1 - 0x1148u, t17);
        t18 = rd32(sp1 - 0x1128u);
        wr32(sp1 - 0x114cu, t18);
        wr32(sp1 - 0x1150u, eax);
        wr32(sp1 - 0x1154u, arg1);
        g->ecx = t18;
        g->esp = sp1 - 0x10f8u;
        t19 = cow_bridge_indirect(g, COW_IMG(0x102cf2f0u), 0u, 23u, (const uint32_t[]){arg1, eax, t18, t17, sp1 - 0x1000u, rd32(sp1 - 0x1140u), rd32(sp1 - 0x113cu), rd32(sp1 - 0x1138u), rd32(sp1 - 0x1134u), rd32(sp1 - 0x1130u), rd32(sp1 - 0x112cu), rd32(sp1 - 0x1128u), rd32(sp1 - 0x1124u), rd32(sp1 - 0x1120u), rd32(sp1 - 0x111cu), rd32(sp1 - 0x1118u), rd32(sp1 - 0x1114u), rd32(sp1 - 0x1110u), rd32(sp1 - 0x110cu), rd32(sp1 - 0x1108u), rd32(sp1 - 0x1104u), rd32(sp1 - 0x1100u), rd32(sp1 - 0x10fcu)}, g->ecx, g->edx, g->eax, 92u);
        t20 = g->ecx;
        wr32(sp1 - 0x112cu, t19);
        eax = t19;
        ecx = t20;
        al_m112c = t19;
    }
    wr32(sp1 - 0x1144u, sp1 - 0x1000u);
    wr32(sp1 - 0x1148u, 5u);
    wr32(sp1 - 0x114cu, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp1 - 0x1000u;
    g->esp = sp1 - 0x1138u;
    t21 = cow_cdecl(g, COW_IMG(0x102cf2c0u), 5, arg1, 5u, sp1 - 0x1000u, rd32(sp1 - 0x1140u), rd32(sp1 - 0x113cu));
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp1 - 0x1148u, t21 + 1u);
    wr32(sp1 - 0x114cu, arg2);
    wr32(sp1 - 0x1150u, arg1);
    g->esp = sp1 - 0x1134u;
    t24 = cow_cdecl(g, COW_IMG(0x102cf6f0u), 7, arg1, arg2, t21 + 1u, rd32(sp1 - 0x1144u), rd32(sp1 - 0x1140u), rd32(sp1 - 0x113cu), rd32(sp1 - 0x1138u));
    if ((int32_t)rd32(sp1 - 0x112cu) < (int32_t)t24)
    {
        eax = t24;
        wr32(sp1 - 0x112cu, eax);
        al_m112c = eax;
    }
    t25 = (uint32_t)((int32_t)(al_m112c + 0xffu) >> 8u);
    if ((int32_t)(uint32_t)((int32_t)(al_m112c + 0xffu) >> 8u) >= (int32_t)rd32(arg2 + 4u))
    {
        eax = t25;
        edx = t25;
    }
    else
    {
        ecx = rd32(arg2 + 4u);
        edx = t25;
        eax = ecx;
    }
    t26 = rd32(arg2 + 8u);
    wr32(arg2 + 4u, edx);
    esi = t26 + 0x1000u;
    edi = t26;
    ecx = 0x8au;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = sp1 - 0x10fcu;
    edi = 0u;
L_102cefba: ;
    wr32(edi * 4u + sp1 - 0x1110u, rd32(ecx));
    if ((int32_t)(edi + 1u) < (int32_t)eax)
    {
        ecx = ecx + 0x40u;
        edi = edi + 1u;
        goto L_102cefba;
    }
    edi = edi + 1u;
    wr32(sp1 - 0x1144u, sp1 - 0x1000u);
    wr32(sp1 - 0x1148u, sp1 - 0x1110u);
    wr32(sp1 - 0x114cu, eax);
    wr32(sp1 - 0x1150u, arg2);
    g->eax = arg2;
    g->edx = sp1 - 0x1110u;
    g->esp = sp1 - 0x1140u;
    t27 = cow_thiscall_cdecl(g, rd32(arg1 + 0x36d4u), sp1 - 0x1000u, 4, arg2, eax, sp1 - 0x1110u, sp1 - 0x1000u);
    t28 = g->ecx;
    t29 = g->edx;
    if ((int32_t)(edi - 4u) >= 0)
    {
        eax = t27;
        ecx = t28;
    }
    else
    {
        eax = t27;
        edx = t29;
        edi = edi - 4u;
        edi = edi + 4u;
L_102cefee: ;
        wr32(sp1 - 0x1144u, edi);
        wr32(sp1 - 0x1148u, arg2);
        g->eax = eax;
        g->ecx = arg2;
        g->edx = edx;
        g->esp = sp1 - 0x1138u;
        t30 = cow_cdecl(g, COW_IMG(0x102cf240u), 4, arg2, edi, rd32(sp1 - 0x1140u), rd32(sp1 - 0x113cu));
        t31 = g->ecx;
        t32 = g->edx;
        if ((int32_t)(edi + 1u) < 4)
        {
            eax = t30;
            edx = t32;
            edi = edi + 1u;
            goto L_102cefee;
        }
        eax = t30;
        ecx = t31;
    }
    if (rd32(arg2) == 0u) goto L_102cf06b;
    wr32(sp1 - 0x1144u, arg1);
    g->esp = sp1 - 0x1100u;
    cow_bridge_indirect(g, COW_IMG(0x102cf0a0u), 0u, 17u, (const uint32_t[]){arg1, rd32(sp1 - 0x1140u), rd32(sp1 - 0x113cu), rd32(sp1 - 0x1138u), rd32(sp1 - 0x1134u), rd32(sp1 - 0x1130u), rd32(sp1 - 0x112cu), rd32(sp1 - 0x1128u), rd32(sp1 - 0x1124u), rd32(sp1 - 0x1120u), rd32(sp1 - 0x111cu), rd32(sp1 - 0x1118u), rd32(sp1 - 0x1114u), rd32(sp1 - 0x1110u), rd32(sp1 - 0x110cu), rd32(sp1 - 0x1108u), rd32(sp1 - 0x1104u)}, g->ecx, g->edx, g->eax, 68u);
    t33 = rd32(sp1 - 0x1128u);
    esi = arg1;
    edi = arg1 + 0x18u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t34 = rd32(arg1 + 0x3cu);
    wr32(arg1 + 0x14u, t33);
    t35 = COW_IMG(0x10344408u) + (uint32_t)((int32_t)rd8(t34) >> 4u) * 8u;
    t36 = rd8(t34);
    wr32(arg1 + 0x10u, t35);
    eax = rd8(t34 + 1u) >> 4u | (uint32_t)((int32_t)(t36 << 8u) >> 4u);
    edx = 3u;
L_102cf051: ;
    if ((eax & 3u) == 2u) goto L_102cf085;
    ecx = eax & 3u;
    t37 = COW_IMG(0x103443f0u) + ecx * 4u;
    wr32(arg1 + edx * 4u, t37);
    if ((int32_t)(edx - 1u) >= 0)
    {
        eax = (uint32_t)((int32_t)eax >> 2u);
        edx = edx - 1u;
        goto L_102cf051;
    }
L_102cf06b: ;
    esi = sp1 - 0x1100u;
    edi = arg2 + 0x1a40u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esi = rd32(sp1 - 0x113cu);
    g->edi = rd32(sp1 - 0x1140u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102cef03: ;
    wr32(sp1 - 0x10bcu, 4u);
    wr32(sp1 - 0x10c0u, 0xffu);
L_102cef11: ;
    wr32(sp1 - 0x107cu, 4u);
    wr32(sp1 - 0x1080u, 0xffu);
L_102cef1f: ;
    wr32(sp1 - 0x103cu, 4u);
    wr32(sp1 - 0x1040u, 0xffu);
    goto L_102cef2d;
L_102cf085: ;
    t38 = (rd32(arg1 + 0x44u) & 0xffffff00u) | (uint8_t)(rd32(arg1 + 0x44u) | 2u);
    t39 = rd32(sp1 - 0x1140u);
    wr32(arg1 + 0x44u, t38);
    g->esi = rd32(sp1 - 0x113cu);
    g->edi = t39;
    g->ebp = rd32(sp0 - 4u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ced70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ced70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
