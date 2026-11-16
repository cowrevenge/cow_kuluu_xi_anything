/* f_0x1003fbb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1003fbb0(Guest* g)
{
    double d3;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0xfcu) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0xfcu);
        eax = rd32(eax);
    }
    if ((int8_t)rd8(eax + 0xdeu) >= 0)
    {
        edx = in_edx;
        goto L_1003fbdf;
    }
    ecx = (self & 0xffffff00u) | rd8(eax + 0xdeu);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10002d80u), eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    d3 = cow_take_float(g);
    if (d3 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t2;
        goto L_1003fc2a;
    }
    edx = t2;
L_1003fbdf: ;
    if (rd32(self + 0x104u) == 0u)
    {
        eax = rd32(self + 0x104u);
    }
    else
    {
        eax = rd32(self + 0x104u);
        if (eax == 0u)
        {
            ecx = 0u;
        }
        else
        {
            ecx = rd32(eax);
        }
        t4 = rd32(self + 0x1bcu);
        g->esp = sp0 - 0xcu;
        t5 = cow_call_regs(g, COW_IMG(0x1003f440u), t4, ecx, edx, 0, 6, self, COW_IMG(0x1047bc0cu), self + 0x194u, self + 0x1a8u, t4, 0u);
        t6 = g->edx;
        wr32(self + 0x1bcu, 0u);
        esi = self + 0x194u;
        edi = self + 0x1a8u;
        ecx = 5u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        eax = t5;
        edx = t6;
    }
L_1003fc2a: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003fbb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003fbb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
