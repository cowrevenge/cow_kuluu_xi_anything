/* f_0x10200310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10200310(Guest* g)
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        edx = in_edx;
    }
    else
    {
        g->eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_cdecl(g, COW_IMG(0x10200280u), 3, arg1 + 0x20u, in_edi, in_esi);
        t2 = g->ecx;
        t3 = g->edx;
        g->edx = t3;
        g->esp = sp0 - 0xcu;
        t4 = cow_cdecl(g, COW_IMG(0x100e7a20u), 1, 0u);
        t5 = g->edx;
        if ((int32_t)t4 < 0)
        {
            eax = t4;
            edx = t5;
        }
        else
        {
            eax = t4;
            edx = t5;
            if (rd32(COW_IMG(0x10663ab8u)) != 0u)
            {
                ecx = rd32(COW_IMG(0x10663ab8u));
                t6 = rd32(arg1 + 0x24u);
                t7 = rd32(arg1 + 0x20u);
                t8 = rd32(arg1 + 0x1cu);
                t9 = rd32(arg1 + 0x18u);
                g->edx = t9;
                g->esp = sp0 - 8u;
                t10 = cow_call_regs(g, COW_IMG(0x10200080u), t8, ecx, g->edx, 0, 4, t9, t8, t7, t6);
                t11 = g->edx;
                eax = t10;
                edx = t11;
            }
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t12 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103851fcu));
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10200310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10200310(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
