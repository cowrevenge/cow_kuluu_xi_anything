/* f_0x10095380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10095380(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg2 < 0x3e8u) goto L_100953a3;
    if ((uint16_t)arg2 > 0x513u) goto L_100953a3;
    eax = in_eax;
    ebx = (uint16_t)arg2 + 0x1055fu;
L_100953c5: ;
    g->ebx = ebx;
    g->eax = eax;
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x101c4af0u), t1, 1, ebx);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0xffffffffu)
    {
        eax = t2;
    }
    else
    {
        ecx = t3;
        edx = t4;
        edi = t2;
        t5 = (edi + 0x5dcu) >> 5u << 5u;
        wr32(COW_IMG(0x10480ae8u), edi >> 5u);
        g->eax = t5;
        g->esp = sp0 - 4u;
        t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t5, in_edi, in_esi);
        t7 = g->edx;
        t8 = rd32(COW_IMG(0x10662dccu));
        wr32(COW_IMG(0x10487e60u), t6);
        g->ebx = ebx;
        g->esp = sp0 - 0xcu;
        t9 = cow_thiscall(g, COW_IMG(0x101c4740u), t8, 4, ebx, t6, edi, 0u);
        if (edi >> 5u == 0u)
        {
            eax = t9;
        }
        else
        {
            esi = edi >> 5u;
            eax = 0u;
L_10095413: ;
            wr32(eax + rd32(COW_IMG(0x10487e60u)) + 0x18u, 0u);
            if (esi != 1u)
            {
                eax = eax + 0x20u;
                esi = esi - 1u;
                goto L_10095413;
            }
            eax = eax + 0x20u;
        }
    }
    g->ebx = in_ebx;
    return eax;
L_100953a3: ;
    if ((uint16_t)arg1 < 0x100u)
    {
        eax = (uint16_t)arg1 + 0x1a40u;
    }
    else
    {
        eax = (uint16_t)arg1 + 0x150dbu;
    }
    ebx = eax;
    goto L_100953c5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10095380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10095380(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
