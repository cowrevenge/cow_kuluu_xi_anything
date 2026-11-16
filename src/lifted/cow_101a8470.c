/* f_0x101a8470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101a8470(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 100u);

    wr32(sp0 - 0x54u, in_ebx);
    wr32(sp0 - 0x58u, in_esi);
    if ((uint8_t)arg1 >= 0xc8u)
    {
        eax = 0u;
        edx = in_edx;
        goto L_101a84cf;
    }
    eax = 0u;
    ecx = self + 0x644u;
L_101a8488: ;
    if (rd8(ecx) == (uint8_t)arg1) goto L_101a84b0;
    if ((int32_t)(eax + 1u) < 20)
    {
        eax = eax + 1u;
        ecx = ecx + 2u;
        goto L_101a8488;
    }
    eax = eax + 1u;
    wr32(sp0 - 0x5cu, sp0 - 0x50u);
    wr32(sp0 - 0x60u, arg1);
    g->ebx = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 0x58u;
    t1 = cow_call_regs(g, COW_IMG(0x101a8530u), eax, self, g->edx, 0, 2, arg1, sp0 - 0x50u);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        goto L_101a84c2;
    }
    edx = t2;
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x58u);
    g->edx = edx;
    return 0u;
L_101a84b0: ;
    g->ebx = in_ebx;
    return eax * 0x50u + self + 4u;
L_101a84c2: ;
    wr32(sp0 - 0x5cu, arg1);
    wr32(sp0 - 0x60u, sp0 - 0x50u);
    g->edx = sp0 - 0x50u;
    g->esp = sp0 - 0x58u;
    t3 = cow_call_regs(g, COW_IMG(0x101a86c0u), eax, self, g->edx, 0, 2, sp0 - 0x50u, arg1);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_101a84cf: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a8470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a8470(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
