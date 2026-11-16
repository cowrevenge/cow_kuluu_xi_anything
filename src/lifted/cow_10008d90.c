/* f_0x10008d90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10008d90(Guest* g)
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

    if (rd8(COW_IMG(0x10455c38u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10455c38u));
        goto L_10008e09;
    }
    wr8(self + 0xca0u, 0u);
    eax = rd32(COW_IMG(0x103d3c64u));
    ecx = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x10u);
    edx = self + 0xca0u;
L_10008db0: ;
    t1 = rd8(ecx);
    wr8(edx, (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        eax = (eax & 0xffffff00u) | t1;
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_10008db0;
    }
    ecx = ecx + 1u;
    edi = self + 0xca0u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t2 = rd32(COW_IMG(0x1034fb68u));
    wr32(edi - 1u, t2);
    t3 = rd32(COW_IMG(0x1034fb6cu));
    wr32(edi + 3u, t3);
    t4 = rd32(COW_IMG(0x1034fb70u));
    wr32(edi + 7u, t4);
    t5 = rd16(COW_IMG(0x1034fb74u));
    wr16(edi + 0xbu, (uint16_t)t5);
    t6 = rd8(COW_IMG(0x1034fb76u));
    wr8(edi + 0xdu, (uint8_t)t6);
    g->eax = t4;
    g->edx = (t3 & 0xffffff00u) | t6;
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall(g, rd32(COW_IMG(0x10329134u)), (t2 & 0xffff0000u) | t5, 1, self + 0xca0u);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        goto L_10008e09;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, rd32(COW_IMG(0x10329130u)), ecx, 1, eax);
    return (t10 & 0xffffff00u) | 1u;
L_10008e09: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10008d90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10008d90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
