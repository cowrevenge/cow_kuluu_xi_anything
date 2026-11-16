/* f_0x101c5f30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c5f30(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u) goto L_101c5fd8;
    t1 = rd32(self + 0x398u) + 1u;
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
    t2 = ~ecx - 1u;
    g->eax = eax;
    g->edx = in_edx;
    t3 = rd32(COW_IMG(0x10662d40u));
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x101b7280u), t3, 6, arg1, t2, self + 0x1d5u, t1, 0u, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(self + 0x39cu, t4);
    if ((int32_t)t4 > 0)
    {
        ecx = t5;
        goto L_101c5f93;
    }
    edx = t6;
    wr8(self + 0x12u, 0u);
    wr8(self + 0x3a0u, 0u);
    wr32(self + 0x690u, 0u);
    g->edx = edx;
    return 1u;
L_101c5f93: ;
    eax = arg1;
L_101c5f9c: ;
    t7 = rd8(eax);
    wr8(eax + self - arg1 + 0x12u, (uint8_t)t7);
    if ((uint8_t)t7 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t7;
        goto L_101c5f9c;
    }
    ecx = (ecx & 0xffffff00u) | t7;
    eax = self + 0x12u;
L_101c5fb0: ;
    t8 = rd8(eax);
    wr8(eax + 0x38eu, (uint8_t)t8);
    if ((uint8_t)t8 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t8;
        goto L_101c5fb0;
    }
    ecx = (ecx & 0xffffff00u) | t8;
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
    t9 = ~ecx - 1u;
    wr32(self + 0x690u, t9);
    g->edx = 0x38eu;
    return 1u;
L_101c5fd8: ;
    eax = COW_IMG(0x103d3c84u);
    ecx = self;
L_101c5fe2: ;
    t10 = rd8(eax);
    wr8(eax + self - COW_IMG(0x103d3c84u) + 0x12u, (uint8_t)t10);
    if ((uint8_t)t10 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t10;
        goto L_101c5fe2;
    }
    ecx = (ecx & 0xffffff00u) | t10;
    wr32(self + 0x39cu, 0u);
    eax = COW_IMG(0x103d3c84u);
L_101c5fff: ;
    t11 = rd8(eax);
    wr8(eax + self - COW_IMG(0x103d3c84u) + 0x3a0u, (uint8_t)t11);
    if ((uint8_t)t11 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t11;
        goto L_101c5fff;
    }
    wr32(self + 0x690u, 0u);
    g->edx = self + 0x3a0u - COW_IMG(0x103d3c84u);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c5f30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c5f30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
