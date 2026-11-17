/* f_0x101ad4b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101ad4b0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_1f4;
    uint32_t loc_1f8;
    uint32_t loc_1fc;
    uint32_t loc_200;
    uint32_t loc_208;
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
    uint32_t t3;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 540u);

    wr32(sp0 - 0x1f4u, in_ebx);
    wr32(sp0 - 0x1f8u, in_ebp);
    wr32(sp0 - 0x1fcu, in_esi);
    wr32(sp0 - 0x200u, in_edi);
    if (arg1 == 0u)
    {
        loc_1f4 = in_ebx;
        loc_1f8 = in_ebp;
        loc_1fc = in_esi;
        loc_200 = in_edi;
        goto L_101ad658;
    }
    if ((int32_t)arg3 <= 0)
    {
        loc_1f4 = in_ebx;
        loc_1f8 = in_ebp;
        loc_1fc = in_esi;
        loc_200 = in_edi;
        goto L_101ad658;
    }
    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx != 1u)
    {
        ecx = ~ecx - 1u;
        goto L_101ad50d;
    }
    ecx = ~ecx - 1u;
    eax = COW_IMG(0x103d3c84u);
L_101ad4f6: ;
    t1 = rd8(eax);
    wr8(arg2 + eax - COW_IMG(0x103d3c84u), (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t1;
        goto L_101ad4f6;
    }
    return;
L_101ad50d: ;
    if ((int32_t)ecx <= 0)
    {
        eax = 0u;
        goto L_101ad51e;
    }
    eax = 0u;
L_101ad513: ;
    if (rd8(arg1 + eax) != 0x20u) goto L_101ad51e;
    if ((int32_t)(eax + 1u) < (int32_t)ecx)
    {
        eax = eax + 1u;
        goto L_101ad513;
    }
    eax = eax + 1u;
L_101ad51e: ;
    if (eax != ecx) goto L_101ad547;
    eax = COW_IMG(0x103d3c84u);
L_101ad530: ;
    t2 = rd8(eax);
    wr8(arg2 + eax - COW_IMG(0x103d3c84u), (uint8_t)t2);
    if ((uint8_t)t2 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t2;
        goto L_101ad530;
    }
    return;
L_101ad547: ;
    wr32(sp0 - 0x204u, 0xf8u);
    wr32(sp0 - 0x208u, sp0 - 0xf8u);
    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t3 = ~ecx - 1u;
    wr32(sp0 - 0x20cu, t3);
    wr32(sp0 - 0x210u, arg1);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x200u;
    t4 = cow_thiscall(g, COW_IMG(0x101b72b0u), rd32(self + 4u), 4, arg1, t3, sp0 - 0xf8u, 0xf8u);
    t5 = g->edx;
    if ((int32_t)t4 >= 0)
    {
        eax = t4;
        edx = t5;
    }
    else
    {
        eax = t4;
        edx = t5;
        wr8(sp0 - 0xf8u, 0u);
    }
    wr32(sp0 - 0x204u, sp0 - 0xf8u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x200u;
    t6 = cow_stdcall(g, COW_IMG(0x101adbc0u), 1, sp0 - 0xf8u);
    t7 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        eax = t6;
        wr32(sp0 - 0x204u, 0xf8u);
        wr32(sp0 - 0x208u, sp0 - 0xf8u);
        wr32(sp0 - 0x20cu, sp0 - 0x1f0u);
        g->edx = sp0 - 0x1f0u;
        g->esp = sp0 - 0x200u;
        cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, sp0 - 0x1f0u, sp0 - 0xf8u, 0xf8u);
        t13 = g->edx;
        edx = t13;
    }
    else
    {
        eax = t6;
        edx = t7;
        wr32(sp0 - 0x204u, 0x80u);
        g->eax = eax;
        g->esp = sp0 - 0x204u;
        t8 = cow_thiscall(g, COW_IMG(0x101ad820u), self, 0);
        t9 = g->ecx;
        wr32(sp0 - 0x208u, t8);
        wr32(sp0 - 0x20cu, sp0 - 0x1f0u);
        g->ecx = t9;
        g->edx = sp0 - 0x1f0u;
        g->esp = sp0 - 0x200u;
        cow_call_regs(g, COW_IMG(0x10312090u), t8, g->ecx, g->edx, 1, 3, sp0 - 0x1f0u, t8, 0x80u);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(sp0 - 0x210u, 0x78u);
        wr32(sp0 - 0x214u, arg1);
        wr32(sp0 - 0x218u, sp0 - 0x1f0u);
        g->esp = sp0 - 0x20cu;
        cow_call_regs(g, COW_IMG(0x10313560u), sp0 - 0x1f0u, g->ecx, t11, 1, 3, sp0 - 0x1f0u, arg1, 0x78u);
        t12 = g->edx;
        wr8(sp0 - 0xf9u, 0u);
        edx = t12;
    }
    wr32(sp0 - 0x204u, sp0 - 0x1f0u);
    g->eax = sp0 - 0x1f0u;
    g->esp = sp0 - 0x200u;
    t14 = cow_thiscall(g, COW_IMG(0x101adbd0u), self, 1, sp0 - 0x1f0u);
    t15 = g->ecx;
    if ((uint8_t)t14 == 0u)
    {
        ecx = t15;
        wr32(sp0 - 0x204u, arg3);
        wr32(sp0 - 0x208u, sp0 - 0x1f0u);
        wr32(sp0 - 0x20cu, arg2);
        eax = arg2;
        edx = sp0 - 0x1f0u;
        loc_208 = sp0 - 0x1f0u;
    }
    else
    {
        wr32(sp0 - 0x204u, 0u);
        wr32(sp0 - 0x208u, 0u);
        wr32(sp0 - 0x20cu, 0xf8u);
        wr32(sp0 - 0x210u, sp0 - 0xf8u);
        edi = sp0 - 0x1f0u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t16 = ~ecx - 1u;
        wr32(sp0 - 0x214u, t16);
        wr32(sp0 - 0x218u, sp0 - 0x1f0u);
        g->edx = sp0 - 0x1f0u;
        g->esp = sp0 - 0x200u;
        cow_thiscall(g, COW_IMG(0x101b7280u), rd32(self + 4u), 6, sp0 - 0x1f0u, t16, sp0 - 0xf8u, 0xf8u, 0u, 0u);
        t17 = g->edx;
        wr32(sp0 - 0x204u, sp0 - 0xf8u);
        g->eax = sp0 - 0xf8u;
        g->edx = t17;
        t18 = cow_thiscall(g, COW_IMG(0x101adbe0u), self, 1, sp0 - 0xf8u);
        t19 = g->edx;
        wr32(sp0 - 0x204u, arg3);
        if ((uint8_t)t18 != 0u)
        {
            edx = t19;
            wr32(sp0 - 0x208u, sp0 - 0x1f0u);
            wr32(sp0 - 0x20cu, arg2);
            eax = sp0 - 0x1f0u;
            ecx = arg2;
            loc_208 = sp0 - 0x1f0u;
        }
        else
        {
            eax = t18;
            wr32(sp0 - 0x208u, sp0 - 0xf8u);
            wr32(sp0 - 0x20cu, arg2);
            ecx = sp0 - 0xf8u;
            edx = arg2;
            loc_208 = sp0 - 0xf8u;
        }
    }
    g->esp = sp0 - 0x200u;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, arg2, loc_208, arg3);
    loc_1f4 = rd32(sp0 - 0x1f4u);
    loc_1f8 = rd32(sp0 - 0x1f8u);
    loc_1fc = rd32(sp0 - 0x1fcu);
    loc_200 = rd32(sp0 - 0x200u);
L_101ad658: ;
    g->ebx = loc_1f4;
    g->esi = loc_1fc;
    g->edi = loc_200;
    g->ebp = loc_1f8;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ad4b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ad4b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
