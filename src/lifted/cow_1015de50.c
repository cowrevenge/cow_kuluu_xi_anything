/* f_0x1015de50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1015de50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        t1 = rd32(eax + 4u);
        wr32(sp0 - 8u, t1);
        t2 = rd32(eax + 8u);
        wr32(sp0 - 4u, t2);
        edx = t2;
    }
    if (rd32(self + 0x54u) == 0u) goto L_1015dec7;
    ecx = rd32(self + 0x54u);
    if (rd8(eax + 0x4du) != 2u) goto L_1015dec7;
    if (rd8(eax + 0x86u) != 0u) goto L_1015dec7;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x10118cb0u), sp0 - 8u, ecx, g->edx, 0, 2, sp0 - 8u, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int16_t)t3 <= 0)
    {
        eax = t3;
        ecx = t4;
        goto L_1015deb4;
    }
    eax = t3;
    edx = t5;
    if ((uint16_t)eax != rd16(rd32(self + 0x54u) + 0x4cu)) goto L_1015dec7;
    wr32(sp0 - 0x14u, 5u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1015dd00u), self, 1, 5u);
    wr16(self + 0xb0u, 0u);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    return;
L_1015deb4: ;
    if (rd8(rd32(COW_IMG(0x104e1d4cu)) + 0x87u) == 0u)
    {
        edx = rd32(COW_IMG(0x104e1d4cu));
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    }
L_1015dec7: ;
    wr16(self + 0xb0u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015de50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1015de50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
