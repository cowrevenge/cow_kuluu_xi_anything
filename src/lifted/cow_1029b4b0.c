/* f_0x1029b4b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1029b4b0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg2 >= 1)
    {
        g->eax = arg3 + 2u;
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, in_edi, in_esi);
        t2 = g->edx;
        g->ecx = rd32(arg1);
        t3 = rd32(arg1);
        g->esp = sp0 - 0xcu;
        t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc6f8u), t3);
        t5 = g->ecx;
        eax = t4;
        ecx = t5;
        esi = arg1 + 4u;
        edi = 2u;
L_1029b4e2: ;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = rd32(esi);
        t6 = rd32(esi);
        g->esp = sp0 - 8u;
        t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc6f0u), t6);
        t8 = g->ecx;
        t9 = g->edx;
        if (edi != 1u)
        {
            eax = t7;
            ecx = t8;
            esi = esi + 4u;
            edi = edi - 1u;
            goto L_1029b4e2;
        }
        eax = t7;
        ecx = t8;
        edx = t9;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb5c4u), in_edi);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029b4b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1029b4b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
