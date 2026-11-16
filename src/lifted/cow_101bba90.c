/* f_0x101bba90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101bba90(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u) goto L_101bbaa9;
    return in_eax & 0xffffff00u;
L_101bbaa9: ;
    if (arg2 != 0u) goto L_101bbb80;
    if ((uint8_t)arg3 >= 7u)
    {
        eax = (arg2 & 0xffffff00u) | (uint8_t)((-((uint8_t)arg3 < 0x13u) & 0xf4u) + 0x13u);
    }
    else
    {
        eax = (arg2 & 0xffffff00u) | (uint8_t)arg3;
    }
    if ((uint8_t)eax != 0u) goto L_101bbb23;
    if ((uint8_t)(arg3 >> 8u) != 0u) goto L_101bbb23;
    if ((uint8_t)(arg3 >> 0x10u) != 0u)
    {
        eax = (eax & 0xffff0000u) | arg3 >> 0x10u;
        goto L_101bbb23;
    }
    eax = (eax & 0xffff0000u) | arg3 >> 0x10u;
    if ((uint8_t)(eax >> 8u) != 0u) goto L_101bbb23;
    wr32(self + 0x204u, 0u);
    wr32(self + 0x200u, 0u);
    wr32(self + 0x1fcu, 0u);
    wr8(self + 0x30u, (uint8_t)(eax >> 8u));
    wr32(self + 0x1f4u, 0u);
    wr8(self + 0x1f8u, (uint8_t)arg3);
    wr8(self + 0x1f9u, (uint8_t)(arg3 >> 8u));
    wr8(self + 0x1fau, (uint8_t)eax);
    wr8(self + 0x1fbu, (uint8_t)(eax >> 8u));
    g->ebx = arg3;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x101bb740u), eax, self, g->edx, 1, 0);
    g->ebx = in_ebx;
    return (t1 & 0xffffff00u) | 1u;
L_101bbb23: ;
    wr32(self + 0x204u, 0u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x101bb070u), self, 1, arg3);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        wr32(self + 0x200u, 0u);
        wr32(self + 0x1fcu, 0xffffffffu);
    }
    else
    {
        eax = t2;
        edx = t3;
        esi = t2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t4 = cow_thiscall(g, COW_IMG(0x101baeb0u), esi, 0);
        t5 = g->edx;
        wr32(self + 0x200u, t4);
        t6 = cow_thiscall(g, COW_IMG(0x101baec0u), esi, 0);
        wr32(self + 0x1fcu, t6);
        eax = t6;
    }
    wr8(self + 0x30u, 0u);
    wr32(self + 0x1f4u, 0u);
    wr8(self + 0x1f8u, (uint8_t)arg3);
    wr8(self + 0x1f9u, (uint8_t)(arg3 >> 8u));
L_101bbc43: ;
    wr8(self + 0x1fau, (uint8_t)(arg3 >> 0x10u));
    wr8(self + 0x1fbu, arg3 >> 0x18u);
    g->ebx = in_ebx;
    return (((eax & 0xffff0000u) | arg3 >> 0x10u) & 0xffffff00u) | 1u;
L_101bbb80: ;
    if (rd32(self + 0x1f4u) != arg2) goto L_101bbbfd;
    esi = self + 0x30u;
    edi = arg1;
    ecx = arg2;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_101bbbfd;
    if (rd8(self + 0x1f8u) < 7u)
    {
        ebx = (arg1 & 0xffffff00u) | rd8(self + 0x1f8u);
    }
    else
    {
        ebx = (arg1 & 0xffffff00u) | rd8(self + 0x1f8u);
        ebx = (ebx & 0xffffff00u) | (uint8_t)((-((uint8_t)ebx < 0x13u) & 0xf4u) + 0x13u);
    }
    if ((uint8_t)arg3 >= 7u)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)((-((uint8_t)arg3 < 0x13u) & 0xf4u) + 0x13u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)arg3;
    }
    if ((uint8_t)ebx != (uint8_t)ecx) goto L_101bbbf9;
    if (rd8(self + 0x1f9u) != (uint8_t)(arg3 >> 8u)) goto L_101bbbf9;
    if (rd8(self + 0x1fau) != (uint8_t)(arg3 >> 0x10u)) goto L_101bbbf9;
    ecx = (ecx & 0xffff0000u) | arg3 >> 0x10u;
    if (rd8(self + 0x1fbu) != (uint8_t)(ecx >> 8u)) goto L_101bbbf9;
    wr32(self + 0x204u, 0u);
    g->ebx = in_ebx;
    return arg2 & 0xffffff00u;
L_101bbbf9: ;
L_101bbbfd: ;
    wr32(self + 0x204u, 1u);
    esi = arg1;
    edi = self + 0x30u;
    ecx = arg2 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg2 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(arg2 + self + 0x30u, 0u);
    wr32(self + 0x1f4u, arg2);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x1018fd90u), arg2, g->ecx, g->edx, 1, 4, self + 0x30u, arg2, in_edi, in_esi);
    wr8(self + 0x1f8u, (uint8_t)arg3);
    wr8(self + 0x1f9u, (uint8_t)(arg3 >> 8u));
    eax = arg3;
    goto L_101bbc43;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bba90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101bba90(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
