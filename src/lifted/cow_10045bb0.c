/* f_0x10045bb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10045bb0(Guest* g)
{
    double d8;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(self + 0xfcu) == 0u) goto L_10045be3;
    eax = rd32(self + 0xfcu);
    if (rd32(eax) == 0u) goto L_10045be3;
    if (eax == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(eax);
    }
    if (!(rd8(eax + 0xdcu) & 1u)) goto L_10045be3;
    return (eax & 0xffffff00u) | 1u;
L_10045be3: ;
    t1 = rd32(self + 0x5cu);
    wr32(sp0 - 4u, t1);
    g->eax = self + 0x54u;
    t2 = rd32(self + 0x58u);
    t3 = rd32(self + 0x54u);
    g->esp = sp0 - 0x18u;
    t4 = cow_fastcall(g, COW_IMG(0x10044ae0u), self, in_edx, 0);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        edx = t5;
        ebx = t2;
        edi = t3;
        goto L_10045c07;
    }
    eax = t4;
    edx = t5;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10045c07: ;
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t6 = cow_thiscall(g, COW_IMG(0x10044f10u), self, 0);
    t7 = g->edx;
    d8 = (double)rdf32(self + 0x138u);
    if (d8 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t6 & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t7;
    }
    else
    {
        eax = (t6 & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t7;
        g->esp = sp0 - 0x18u;
        cow_call_regs(g, COW_IMG(0x10044d40u), eax, self, g->edx, 1, 0);
        wr32(sp0 - 0x24u, edi);
        wr32(sp0 - 0x20u, ebx);
        t9 = rd32(sp0 - 4u);
        wr32(sp0 - 0x1cu, t9);
        g->eax = t9;
        g->edx = sp0 - 0x24u;
        t10 = cow_thiscall(g, COW_IMG(0x10045190u), self, 3, edi, ebx, t9);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10045bb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10045bb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
