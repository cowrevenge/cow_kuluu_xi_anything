/* f_0x10298730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_10298730(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    t1 = rd32(sp0 + 8u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x102a8e50u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        ebp = t1;
        esi = rd32(sp0 + 4u);
        edi = in_edi;
        loc_4 = self & 0xffffffu;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        ebp = t1;
        esi = rd32(sp0 + 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t5 = cow_thiscall_cdecl(g, COW_IMG(0x102a8760u), ecx, 2, esi, ebp);
        t6 = g->ecx;
        t7 = g->edx;
        edi = ebp;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        g->eax = eax;
        g->edx = t7;
        g->esp = sp0 - 4u;
        t8 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, ~ecx, COW_IMG(0x103bbc70u), 0xc8u, esi, ebp, in_edi, in_esi, in_ebp);
        t9 = g->edx;
        wr32(esi + 0x18u, t8);
        eax = t8;
        ecx = ebp;
        edx = t9;
        loc_4 = (self & 0xffffffu) | (uint8_t)t5 << 0x18u;
L_1029877e: ;
        t10 = rd8(ecx);
        wr8(eax, (uint8_t)t10);
        if ((uint8_t)t10 != 0u)
        {
            eax = eax + 1u;
            ecx = ecx + 1u;
            edx = (edx & 0xffffff00u) | t10;
            goto L_1029877e;
        }
        eax = eax + 1u;
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | t10;
    }
    g->edi = edi;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x102a64a0u), ecx, 1, ebp);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
    }
    else
    {
        ecx = t12;
        edx = t13;
        edi = ebp;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t14 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, ~ecx, COW_IMG(0x103bbc70u), 0xceu);
        wr32(esi + 0x18u, t14);
        eax = t14;
        ecx = ebp;
        edx = t14;
L_102987bc: ;
        t15 = rd8(ecx);
        wr8(edx, (uint8_t)t15);
        if ((uint8_t)t15 != 0u)
        {
            eax = (eax & 0xffffff00u) | t15;
            ecx = ecx + 1u;
            edx = edx + 1u;
            goto L_102987bc;
        }
        eax = (eax & 0xffffff00u) | t15;
        ecx = ecx + 1u;
        edx = edx + 1u;
        g->edi = edi;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t16 = cow_thiscall_cdecl(g, COW_IMG(0x102a64f0u), ecx, 2, esi, ebp);
        t17 = g->ecx;
        t18 = g->edx;
        eax = t16;
        ecx = t17;
        edx = t18;
        loc_4 = (loc_4 & 0xffffffu) | (uint8_t)t16 << 0x18u;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t19 = cow_thiscall_cdecl(g, COW_IMG(0x102a76c0u), ecx, 1, ebp);
    t20 = g->ecx;
    t21 = g->edx;
    if ((uint8_t)t19 == 0u)
    {
        edx = t21;
    }
    else
    {
        ecx = t20;
        edx = t21;
        edi = ebp;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t22 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, ~ecx, COW_IMG(0x103bbc70u), 0xd6u);
        wr32(esi + 0x18u, t22);
        eax = t22;
        ecx = ebp;
        edx = t22;
L_10298808: ;
        t23 = rd8(ecx);
        wr8(edx, (uint8_t)t23);
        if ((uint8_t)t23 != 0u)
        {
            eax = (eax & 0xffffff00u) | t23;
            ecx = ecx + 1u;
            edx = edx + 1u;
            goto L_10298808;
        }
        eax = (eax & 0xffffff00u) | t23;
        ecx = ecx + 1u;
        edx = edx + 1u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t24 = cow_thiscall_cdecl(g, COW_IMG(0x102a6fa0u), ecx, 2, esi, ebp);
        t25 = g->edx;
        edx = t25;
        loc_4 = (loc_4 & 0xffffffu) | (uint8_t)t24 << 0x18u;
    }
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x2d0u) == 0u)
    {
        eax = rd32(COW_IMG(0x1099d200u));
    }
    else
    {
        if (rd32(esi + 0x38u) == 0u)
        {
            eax = rd32(esi + 0x38u);
        }
        else
        {
            eax = rd32(esi + 0x38u);
            t26 = rd32(esi + 0x30u);
            t27 = t26 * rd32(esi + 0x20u) * rd32(esi + 0x1cu);
            g->eax = eax;
            g->ecx = t27;
            t28 = rd32(esi + 0x20u);
            t29 = rd32(esi + 0x1cu);
            g->esp = sp0 - 0x10u;
            t30 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, t27, COW_IMG(0x103bbc70u), 0xf1u);
            t31 = g->ecx;
            wr32(sp0 + 4u, t30);
            wr32(sp0 + 8u, 0u);
            if ((int32_t)(t28 * t29) <= 0)
            {
                ecx = t31;
                edx = 0u;
                edi = t26;
            }
            else
            {
                eax = t30;
                ebp = t28 * t29;
                edi = t26;
                edx = 0u;
                ebx = eax;
L_10298873: ;
                if ((int32_t)edi <= 0)
                {
                    ecx = rd8(edx + rd32(esi + 0x28u)) * edi;
                    goto L_10298899;
                }
                eax = 0u;
                ecx = rd8(edx + rd32(esi + 0x28u)) * edi;
L_10298884: ;
                wr8(eax + ebx, rd8(eax + ecx + rd32(esi + 0x38u)));
                if ((int32_t)(eax + 1u) < (int32_t)edi)
                {
                    eax = eax + 1u;
                    goto L_10298884;
                }
                edx = rd32(sp0 + 8u);
L_10298899: ;
                wr32(sp0 + 8u, edx + 1u);
                if ((int32_t)(edx + 1u) < (int32_t)ebp)
                {
                    edx = edx + 1u;
                    ebx = ebx + edi;
                    goto L_10298873;
                }
                edx = edx + 1u;
            }
            t32 = rd32(esi + 0x28u);
            g->eax = t32;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t33 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t32, COW_IMG(0x103bbc70u), 0xf7u);
            t34 = g->edx;
            t35 = rd32(esi + 0x38u);
            g->esp = sp0 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, t35, COW_IMG(0x103bbc70u), 0xf8u);
            t36 = rd32(sp0 + 4u);
            wr32(esi + 0x24u, edi);
            wr32(esi + 0x30u, 0u);
            wr32(esi + 0x38u, 0u);
            wr32(esi + 0x28u, t36);
            eax = 0u;
        }
    }
    g->edi = in_edi;
    return (eax & 0xffffff00u) | loc_4 >> 0x18u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10298730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10298730(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
