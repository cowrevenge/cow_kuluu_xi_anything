/* f_0x10064c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10064c30(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 280u);

    wr32(sp0 - 0x104u, in_ebx);
    wr32(sp0 - 0x108u, in_ebp);
    wr32(sp0 - 0x10cu, in_esi);
    wr32(sp0 - 0x110u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x110u;
    t1 = cow_thiscall(g, COW_IMG(0x1006b4e0u), sp0 - 0x100u, 0);
    t2 = g->edx;
    wr32(sp0 - 0x114u, arg1);
    t3 = cow_fastcall(g, COW_IMG(0x1006b520u), sp0 - 0x100u, t2, 1, arg1);
    t4 = g->edx;
    wr32(sp0 - 0x114u, 0u);
    g->edx = t4;
    t5 = cow_call_regs(g, COW_IMG(0x1006b5f0u), t3, sp0 - 0x100u, g->edx, 0, 1, 0u);
    t6 = g->edx;
    esi = t5;
    edi = COW_IMG(0x10353b6cu);
    ecx = 2u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        edx = t6;
        goto L_10064c95;
    }
    edx = t6;
    wr32(sp0 - 0x114u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t7 = cow_thiscall(g, COW_IMG(0x10064cd0u), self, 1, arg1);
    t8 = g->edx;
    t9 = cow_stdcall(g, COW_IMG(0x1006b4f0u), 0);
    return (t9 & 0xffffff00u) | (uint8_t)t7;
L_10064c95: ;
    g->eax = 0u;
    g->esp = sp0 - 0x110u;
    t10 = cow_stdcall(g, COW_IMG(0x1006b4f0u), 0);
    return t10 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10064c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10064c30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
