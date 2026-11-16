/* f_0x10114660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10114660(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;

    if (rd32(COW_IMG(0x10662dccu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662dccu));
        if (rd8(self + 0x450u) == 0u)
        {
            edx = (in_edx & 0xffffff00u) | rd8(self + 0x450u);
            goto L_1011468f;
        }
        edx = (in_edx & 0xffffff00u) | rd8(self + 0x450u);
        g->eax = self + 0x450u;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x101c4aa0u), ecx, 1, self + 0x450u);
        t2 = g->ecx;
        t3 = g->edx;
        if ((uint8_t)t1 != 0u) goto L_10114740;
        ecx = t2;
        edx = t3;
L_1011468f: ;
        if (self + 0x360u != self + 0x278u)
        {
            t4 = rd32(self + 0x278u);
            wr32(self + 0x360u, t4);
            t5 = rd16(self + 0x27cu);
            wr16(self + 0x364u, (uint16_t)t5);
            wr16(self + 0x366u, rd16(self + 0x27eu));
            esi = self + 0x280u;
            edi = self + 0x368u;
            ecx = 0x38u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            edx = (edx & 0xffff0000u) | t5;
        }
        g->eax = self + 0x278u;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t6 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t7 = g->edx;
        wr32(self + 0x360u, t6);
        wr16(self + 0x366u, 0u);
        g->ecx = self;
        t8 = cow_call_regs(g, COW_IMG(0x10114620u), t6, g->ecx, g->edx, 0, 2, self + 0x360u, 0xe8u);
        t9 = g->ecx;
        wr16(self + 0x366u, (uint16_t)~t8);
        if ((uint16_t)~t8 != 0u)
        {
            eax = ~t8;
            ecx = t9;
        }
        else
        {
            eax = ~t8;
            ecx = t9;
            wr16(self + 0x366u, 0xffffu);
        }
        t10 = rd16(self + 0x44au);
        g->eax = eax;
        g->edx = t10;
        g->esp = sp0 - 4u;
        t11 = cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x450u, COW_IMG(0x1036c078u), t10, in_esi, in_ebp);
        t12 = g->edx;
        g->esp = sp0 - 0xcu;
        t13 = cow_thiscall(g, COW_IMG(0x101c4900u), rd32(COW_IMG(0x10662dccu)), 4, self + 0x450u, self + 0x360u, 0xe8u, 0u);
        wr16(self + 0x44au, rd8(self + 0x44au) + 1u & 7u);
    }
L_10114740: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10114660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10114660(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
