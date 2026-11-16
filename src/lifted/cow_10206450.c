/* f_0x10206450 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10206450(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if ((int32_t)rd32(self + 0x14u) < 1)
    {
        eax = rd32(self + 0x14u);
        goto L_10206468;
    }
    eax = rd32(self + 0x14u);
    if ((int32_t)eax >= 3) goto L_1020646d;
    edi = 0xau;
L_1020647c: ;
    if ((int32_t)rd32(self + 0x18u) <= 16)
    {
        ecx = rd32(self + 0x18u);
    }
    else
    {
        ecx = rd32(self + 0x18u);
        wr32(self + 0x18u, 0x10u);
    }
    if (rd32(self + 0x38u) != 0u)
    {
        eax = rd32(self + 0x38u);
        edx = in_edx;
    }
    else
    {
        g->esp = sp0;
        t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, in_edx, 1, 3, 0x6b4u, in_edi, in_esi);
        t2 = g->edx;
        if (t1 == 0u)
        {
            edx = t2;
            eax = 0u;
        }
        else
        {
            eax = t1;
            edx = t2;
            t3 = rd32(self + 0x18u);
            g->edx = edx;
            g->esp = sp0 - 8u;
            t4 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, edi, t3, self, COW_IMG(0x10206440u), COW_IMG(0x103d3c84u), 0x14au, 0xfu, 0x114u);
            t5 = g->edx;
            eax = t4;
            edx = t5;
        }
        wr32(self + 0x38u, eax);
    }
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101c68a0u), eax, rd32(COW_IMG(0x10662da0u)), edx, 1, 0);
    t6 = rd32(self + 0x38u);
    cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t6);
    return;
L_10206468: ;
    if ((int32_t)eax < 3) goto L_10206477;
L_1020646d: ;
    if ((int32_t)eax < 6)
    {
        edi = 1u;
        goto L_1020647c;
    }
L_10206477: ;
    edi = 7u;
    goto L_1020647c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10206450(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10206450(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
