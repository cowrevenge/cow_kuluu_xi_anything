/* f_0x1007f8b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007f8b0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc0d0u), in_eax, g->ecx, in_edx, 1, 2, 0x46u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t3;
        goto L_1007f988;
    }
    ecx = t2;
    if (rd32(rd32(COW_IMG(0x103551e0u)) + 4u) != 0u)
    {
        edx = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
        goto L_1007f8ec;
    }
    edx = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x101a7fd0u), 1, edx);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        edx = t5;
        goto L_1007f988;
    }
    edx = t5;
    g->edx = edx;
    return -arg3;
L_1007f8ec: ;
    esi = edx;
    edi = COW_IMG(0x103580c0u);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        eax = 0u;
    }
    else
    {
        eax = -cf + 1u - cf;
    }
    if (eax != 0u) goto L_1007f91e;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x101a7fd0u), 1, 1u);
    t7 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        edx = t7;
        goto L_1007f988;
    }
    edx = t7;
    g->edx = edx;
    return -arg3;
L_1007f91e: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, edx);
    t9 = g->edx;
    if (rd32(rd32(COW_IMG(0x103551e0u)) + 8u) == 0u)
    {
        eax = (t8 & 0xffffff00u) | (uint8_t)((uint8_t)t8 - 1u);
        ecx = rd32(COW_IMG(0x103551e0u));
        edx = t9;
        goto L_1007f96c;
    }
    eax = (t8 & 0xffffff00u) | (uint8_t)((uint8_t)t8 - 1u);
    esi = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    edi = COW_IMG(0x103580c0u);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
    }
    else
    {
        edx = -cf + 1u - cf;
    }
    if (edx != 0u) goto L_1007f96c;
    t10 = (edx & 0xffff0000u) | (uint8_t)eax;
    g->edx = t10;
    g->esp = sp0 - 8u;
    t11 = cow_cdecl(g, COW_IMG(0x101a7df0u), 2, t10, 1u);
    t12 = g->edx;
    if ((uint8_t)t11 != 0u)
    {
        edx = t12;
        goto L_1007f988;
    }
    edx = t12;
    g->edx = edx;
    return -arg3;
L_1007f96c: ;
    t13 = (eax & 0xffff0000u) | (uint8_t)eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_cdecl(g, COW_IMG(0x101a7df0u), 2, t13, 0u);
    t15 = g->edx;
    if ((uint8_t)t14 != 0u)
    {
        edx = t15;
        goto L_1007f988;
    }
    edx = t15;
    g->edx = edx;
    return -arg3;
L_1007f988: ;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007f8b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007f8b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
