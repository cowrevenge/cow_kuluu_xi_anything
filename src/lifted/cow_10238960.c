/* f_0x10238960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10238960(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    t1 = rd32(COW_IMG(0x1066901cu));
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_call_regs(g, COW_IMG(0x1023da60u), in_eax, t1, g->edx, 1, 0);
    t3 = g->edx;
    if ((int16_t)t2 > 0)
    {
        edx = t3;
        goto L_1023899a;
    }
    eax = t2;
    edx = t3;
    wr32(self + 0x18u, 0xffffffffu);
    g->edx = edx;
    return eax;
L_1023899a: ;
    wr32(sp0 - 0x14u, sp0 - 8u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, rd32(self + 8u), g->edx, 0, 1, sp0 - 8u);
    t5 = g->edx;
    if (rd8(rd32(COW_IMG(0x1066901cu)) + 0x52u) == 0u)
    {
        eax = t4;
    }
    else
    {
        eax = t4;
        ecx = rd32(COW_IMG(0x1066901cu));
        edx = t5;
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t6 = cow_thiscall(g, COW_IMG(0x1023da70u), ecx, 0);
        t7 = g->ecx;
        if (t6 == 0u)
        {
            eax = t6;
        }
        else
        {
            eax = t6;
            ecx = t7;
            edx = self + 0x1cu - (eax + 4u);
            eax = eax + 4u;
L_102389c3: ;
            t8 = rd8(eax);
            wr8(eax + edx, (uint8_t)t8);
            if ((uint8_t)t8 != 0u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t8;
                goto L_102389c3;
            }
            eax = eax + 1u;
        }
    }
    wr32(sp0 - 0x14u, 0x80808080u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, self + 0x1cu);
    t9 = (uint32_t)(int16_t)rd16(sp0 - 6u) + 4u;
    wr32(sp0 - 0x20u, t9);
    t10 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 0x10u;
    wr32(sp0 - 0x24u, t10);
    g->edx = t10;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10129f00u), 5, t10, t9, self + 0x1cu, 0u, 0x80808080u);
    t11 = g->edx;
    if (rd32(rd32(COW_IMG(0x10668fc4u)) + 8u) == 0u)
    {
        eax = rd32(COW_IMG(0x10668fc4u));
        edx = t11;
    }
    else
    {
        eax = rd32(COW_IMG(0x10668fc4u));
        ecx = rd32(rd32(COW_IMG(0x10668fc4u)) + 8u);
        edx = t11;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t12 = cow_thiscall(g, COW_IMG(0x1011a3d0u), ecx, 0);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10238960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10238960(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
