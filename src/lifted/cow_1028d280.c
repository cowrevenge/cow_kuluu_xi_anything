/* f_0x1028d280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1028d280(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg2 <= 0)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
    }
    else
    {
        esi = 0u;
L_1028d296: ;
        t1 = cow_divs(g, esi, 0xau);
        t2 = cow_mods(g, esi, 0xau);
        if (t2 != 0u)
        {
            eax = t1;
            ecx = 0xau;
        }
        else
        {
            eax = t1;
            edx = t2;
            g->ebx = arg2;
            g->eax = eax;
            g->ecx = 0xau;
            g->esp = sp0 - 4u;
            t3 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg1, COW_IMG(0x103ba45cu), in_ebp, in_edi, in_esi);
            t4 = g->ecx;
            eax = t3;
            ecx = t4;
        }
        t5 = rd32(arg3 + esi * 4u);
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        t6 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t5, 1, 5, arg1, COW_IMG(0x103ba458u), t5, in_ebp, in_edi);
        t7 = g->ecx;
        t8 = g->edx;
        if ((int32_t)(esi + 1u) < (int32_t)arg2)
        {
            esi = esi + 1u;
            goto L_1028d296;
        }
        eax = t6;
        ecx = t7;
        edx = t8;
    }
    g->ebx = arg2;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg1, COW_IMG(0x10350e4cu), in_edi, in_esi, in_ebx);
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028d280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028d280(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
