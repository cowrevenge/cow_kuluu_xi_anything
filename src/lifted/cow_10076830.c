/* f_0x10076830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_10076830(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);

    t1 = rd8(sp0 + 0x18u);
    t2 = rd32(sp0 + 4u);
    t3 = rd32(sp0 + 8u);
    wr32(sp0 + 0x18u, 0u);
    t4 = (uint32_t)(int8_t)((-((uint8_t)(t1 - 1u) != 0u) & 0x17u) + 9u);
    t5 = rd32(sp0 + 0x18u);
    wr32(sp0 + 4u, t3);
    eax = t5;
    ecx = t4;
    edx = in_edx;
    ebx = t2;
    ebp = 0u;
    esi = t3;
    edi = 0x1ffu;
    loc_4 = t4;
    loc_8 = t2;
L_1007686b: ;
    if ((int32_t)arg5 <= (int32_t)ebp) goto L_10076971;
    if ((uint32_t)(int8_t)rd8(ebx) == 0u)
    {
        ecx = (uint32_t)(int8_t)rd8(ebx);
        edx = (edx & 0xffffff00u) | rd8(ebx);
        goto L_10076971;
    }
    ecx = (uint32_t)(int8_t)rd8(ebx);
    edx = (edx & 0xffffff00u) | rd8(ebx);
    if (ecx == loc_4) goto L_10076940;
    if (ecx == 0x20u) goto L_10076940;
    if (ecx == 0x22u) goto L_100768dc;
    if (ecx == 0x27u) goto L_100768dc;
    if ((int32_t)edi <= 0) goto L_100768d2;
L_100768a3: ;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x100769f0u), g->eax, g->ecx, edx, 1, 7, esi, ebx, edi, in_edi, in_esi, in_ebp, in_ebx);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        ebx = ebx + t6;
        esi = esi + t6;
        edi = edi - t6;
        goto L_10076971;
    }
    eax = t6;
    edx = t8;
    ebx = ebx + t6;
    esi = esi + t6;
    edi = edi - t6;
    if ((uint32_t)(int8_t)rd8(ebx) == 0u)
    {
        ecx = (uint32_t)(int8_t)rd8(ebx);
        goto L_100768d2;
    }
    ecx = (uint32_t)(int8_t)rd8(ebx);
    if (ecx == 0x20u) goto L_100768d2;
    if (ecx == loc_4) goto L_100768d2;
    if ((int32_t)edi > 0) goto L_100768a3;
L_100768d2: ;
    if (eax == 0u) goto L_10076971;
L_10076913: ;
    t12 = rd32(sp0 + 0xcu);
    t13 = rd32(sp0 + 4u);
    wr8(esi, 0u);
    wr32(t12, t13);
    wr32(sp0 + 0xcu, t12 + 4u);
    t14 = rd32(sp0 + 0x10u);
    wr32(t14, loc_8);
    wr32(sp0 + 0x10u, t14 + 4u);
    wr32(sp0 + 0x18u, ebp + 1u);
    ecx = t14 + 4u;
    edx = loc_8;
    ebp = ebp + 1u;
    esi = esi + 1u;
L_10076961: ;
    wr32(sp0 + 4u, esi);
    if ((int32_t)edi > 0)
    {
        loc_8 = ebx;
        goto L_1007686b;
    }
    loc_8 = ebx;
L_10076971: ;
    if (rd8(ebx) != 0u)
    {
        if ((int32_t)edi <= 0) goto L_10076998;
L_1007697a: ;
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        t15 = cow_call_regs(g, COW_IMG(0x100769f0u), g->eax, g->ecx, edx, 1, 7, esi, ebx, edi, in_edi, in_esi, in_ebp, in_ebx);
        t16 = g->ecx;
        t17 = g->edx;
        if (t15 == 0u)
        {
            ebx = ebx + t15;
            esi = esi + t15;
            goto L_100769b5;
        }
        eax = t15;
        ecx = t16;
        edx = t17;
        ebx = ebx + t15;
        esi = esi + t15;
        edi = edi - t15;
        if (rd8(ebx) == 0u) goto L_10076998;
        if ((int32_t)edi > 0) goto L_1007697a;
L_10076998: ;
        if (eax != 0u)
        {
            t18 = rd32(sp0 + 0xcu);
            t19 = rd32(sp0 + 4u);
            t20 = rd32(sp0 + 0x10u);
            wr8(esi, 0u);
            wr32(t18, t19);
            wr32(t20, loc_8);
            ebp = ebp + 1u;
            esi = esi + 1u;
        }
    }
L_100769b5: ;
    wr8(esi, 0u);
    if ((int32_t)ebp <= 0) goto L_100769de;
    esi = 0u;
L_100769be: ;
    t21 = rd32(esi * 4u + rd32(COW_IMG(0x103551e0u)));
    g->ebx = ebx;
    g->esp = sp0 - 0x18u;
    t22 = cow_thiscall_cdecl(g, COW_IMG(0x10076a70u), rd32(COW_IMG(0x103551e0u)), 1, t21);
    wr32(esi * 4u + rd32(COW_IMG(0x103551e0u)), t22);
    if ((int32_t)(esi + 1u) < (int32_t)ebp)
    {
        esi = esi + 1u;
        goto L_100769be;
    }
L_100769de: ;
    g->ebx = in_ebx;
    return ebp;
L_100768dc: ;
    wr8(esi, (uint8_t)edx);
    wr32(sp0 + 8u, ecx);
    if ((int32_t)(edi - 1u) <= 0)
    {
        ebx = ebx + 1u;
        esi = esi + 1u;
        edi = edi - 1u;
        goto L_10076913;
    }
    ebx = ebx + 1u;
    esi = esi + 1u;
    edi = edi - 1u;
L_100768e9: ;
    if ((uint32_t)(int8_t)rd8(ebx) == 0u) goto L_1007690f;
    ebp = (uint32_t)(int8_t)rd8(ebx);
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t9 = cow_call_regs(g, COW_IMG(0x100769f0u), g->eax, g->ecx, edx, 1, 7, esi, ebx, edi, in_edi, in_esi, in_ebp, in_ebx);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 0u)
    {
        eax = t9;
        ebx = ebx + t9;
        esi = esi + t9;
        edi = edi - t9;
        goto L_1007690f;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    ebx = ebx + t9;
    esi = esi + t9;
    edi = edi - t9;
    if (ebp == rd32(sp0 + 8u)) goto L_1007690f;
    if ((int32_t)edi > 0) goto L_100768e9;
L_1007690f: ;
    ebp = rd32(sp0 + 0x18u);
    goto L_10076913;
L_10076940: ;
    if ((int32_t)edi <= 0) goto L_1007695d;
L_10076944: ;
    if (loc_4 == (uint32_t)(int8_t)rd8(ebx))
    {
        ecx = (ecx & 0xffffff00u) | rd8(ebx);
        edx = (uint32_t)(int8_t)rd8(ebx);
        goto L_10076954;
    }
    ecx = (ecx & 0xffffff00u) | rd8(ebx);
    edx = (uint32_t)(int8_t)rd8(ebx);
    if ((uint8_t)ecx != 0x20u) goto L_1007695d;
L_10076954: ;
    wr8(esi, (uint8_t)ecx);
    if ((int32_t)(edi - 1u) > 0)
    {
        ebx = ebx + 1u;
        esi = esi + 1u;
        edi = edi - 1u;
        goto L_10076944;
    }
    ebx = ebx + 1u;
    esi = esi + 1u;
    edi = edi - 1u;
L_1007695d: ;
    wr8(esi, 0u);
    esi = esi + 1u;
    goto L_10076961;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10076830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10076830(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
