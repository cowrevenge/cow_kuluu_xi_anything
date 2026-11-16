/* f_0x102cf2f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_102cf2f0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t2 = cow_cdecl(g, COW_IMG(0x102cf2c0u), 5, t1, 2u, in_edi, in_esi, in_ebp);
    t3 = g->edx;
    if (t2 == 0u)
    {
        edx = t3;
        esi = t1;
        cf = 0u;
        pf = PARITY((uint8_t)t2);
        zf = t2 == 0u;
        sf = (int32_t)t2 < 0;
        of = 0u;
        loc_10 = t2;
        goto L_102cf324;
    }
    eax = t2;
    edx = t3;
    esi = t1;
    loc_10 = t2;
    if (eax == 1u)
    {
        cf = eax < 1u;
        pf = PARITY((uint8_t)(eax - 1u));
        zf = eax == 1u;
        sf = (int32_t)(eax - 1u) < 0;
        of = ((eax ^ 1u) & (eax ^ eax - 1u)) >> 0x1fu;
        goto L_102cf324;
    }
    if (eax != 3u) goto L_102cf484;
    cf = eax < 3u;
    pf = PARITY((uint8_t)(eax - 3u));
    zf = eax == 3u;
    sf = (int32_t)(eax - 3u) < 0;
    of = ((eax ^ 3u) & (eax ^ eax - 3u)) >> 0x1fu;
L_102cf324: ;
    t4 = (uint32_t)((int32_t)0xffffffc0u >> ((arg3 & 0x1fu) < 0x20u ? arg3 & 0x1fu : 0x1fu));
    ecx = arg3;
    ebx = t4;
    loc_20 = 0u;
    loc_4 = t4;
L_102cf340: ;
    t5 = rd32(esi + 0x40u);
    t6 = rd32(esi + 0x3cu);
    wr32(sp0 + 4u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t7 = cow_cdecl(g, COW_IMG(0x102cf280u), 5, t6, t5, 9u, in_edi, in_esi);
    t8 = g->edx;
    t9 = arg3 + t5 + 4u;
    wr32(esi + 0x40u, t9);
    t10 = (uint32_t)((int32_t)(t7 - (ebx & t7)) >> ((3u - arg3 & 0x1fu) < 0x20u ? 3u - arg3 & 0x1fu : 0x1fu)) + 1u;
    g->eax = t10;
    g->ecx = t9;
    g->edx = t8;
    g->esp = sp0 - 0x30u;
    t11 = cow_cdecl(g, COW_IMG(0x102cf2c0u), 5, esi, 3u, t6, t5, 9u);
    t12 = g->ecx;
    t13 = g->edx;
    if ((int32_t)(t11 - 1u) <= 0) goto L_102cf484;
    ecx = t12;
    edx = t13;
    ebp = t11 - 1u;
    loc_18 = ebx & t7;
    ebx = ebx & t7;
    loc_c = t10;
    if ((int32_t)loc_10 <= 1)
    {
        eax = loc_10;
    }
    else
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t14 = cow_cdecl(g, COW_IMG(0x102cf4a0u), 1, esi);
        t15 = g->ecx;
        t16 = g->edx;
        eax = t14;
        ecx = t15;
        edx = t16;
    }
    t17 = COW_IMG(0x10344370u) + eax * 0x40u;
    eax = t17;
    loc_8 = t17;
L_102cf3a5: ;
    if (rd8(sp0 + 4u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
        goto L_102cf3c7;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
    if ((int8_t)(ebx * 2u) < 0)
    {
        loc_18 = ebx * 2u;
        ebx = ebx * 2u;
        goto L_102cf3c7;
    }
    zf = (uint8_t)(ebx * 2u) == 0u;
    loc_18 = ebx * 2u;
    ebx = ebx * 2u;
    if (zf) goto L_102cf45e;
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 0x100u);
    goto L_102cf3a5;
L_102cf3c7: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t20 = cow_cdecl(g, COW_IMG(0x102cf2c0u), 5, esi, 3u, in_edi, in_esi, in_ebp);
    t21 = g->ecx;
    t22 = g->edx;
    if ((int32_t)(t20 - 1u) < 0)
    {
        eax = t20 - 1u;
        ecx = t21;
        edx = t22;
        goto L_102cf454;
    }
    eax = t20 - 1u;
    ecx = t21;
    edx = t22;
    loc_1c = t20 - 1u;
L_102cf3d9: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t23 = cow_cdecl(g, COW_IMG(0x102cf2c0u), 5, esi, 6u, in_edi, in_esi, in_ebp);
    t24 = g->ecx;
    t25 = g->edx;
    g->esp = sp0 - 0x2cu;
    t26 = cow_cdecl(g, COW_IMG(0x102cf2c0u), 5, esi, 6u, esi, 6u, in_edi);
    if ((int32_t)(loc_c + t26 + rd32(sp0 + 4u)) <= 1024)
    {
        eax = t26 + rd32(sp0 + 4u);
        ecx = loc_c + t26 + rd32(sp0 + 4u);
        edi = t23;
    }
    else
    {
        eax = t26 + rd32(sp0 + 4u);
        edi = t23;
        ecx = 0x400u;
    }
    if ((int32_t)rd32(sp0 + 0x10u) < (int32_t)ecx)
    {
        wr32(sp0 + 0x10u, ecx);
    }
    if (loc_20 == 0x40u) goto L_102cf484;
    loc_20 = loc_20 + 1u;
    t27 = arg5 + ecx * 4u;
    t28 = arg5 + eax * 4u;
    t29 = rd32(COW_IMG(0x103cc308u) + edi * 4u);
    g->edx = t28;
    g->esp = sp0 - 0x14u;
    cow_thiscall_cdecl(g, COW_IMG(0x102cf4d0u), loc_8, 13, esi, loc_8, ebp, t29, t28, t27, in_edi, in_esi, in_ebp, in_ebx, loc_20, loc_1c, loc_18);
    t30 = g->ecx;
    t31 = g->edx;
    if ((int32_t)(loc_1c - 1u) >= 0)
    {
        eax = loc_1c - 1u;
        ecx = t30;
        edx = t31;
        loc_1c = loc_1c - 1u;
        goto L_102cf3d9;
    }
    eax = loc_1c - 1u;
    ecx = t30;
    edx = t31;
    ebx = loc_18;
L_102cf454: ;
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 0x40u);
    goto L_102cf3a5;
L_102cf45e: ;
    t18 = rd32(sp0 + 8u) - 1u;
    t19 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t18);
    if ((int32_t)(t19 - 1u) <= 0) goto L_102cf478;
    ebx = loc_4;
    goto L_102cf340;
L_102cf478: ;
    return rd32(sp0 + 0x10u);
L_102cf484: ;
    t32 = (rd32(esi + 0x44u) & 0xffffff00u) | (uint8_t)(rd32(esi + 0x44u) | 2u);
    wr32(esi + 0x44u, t32);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102cf2f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102cf2f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
