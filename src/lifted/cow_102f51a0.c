/* f_0x102f51a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102f51a0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    eax = rd32(COW_IMG(0x109b2640u));
L_102f51b7: ;
    if (eax != 0u) goto L_102f51ac;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0xb0u, in_esi, in_edi);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        esi = 0u;
    }
    else
    {
        eax = t1;
        edx = t2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t3 = cow_thiscall(g, COW_IMG(0x102f47c8u), eax, 0);
        t4 = g->edx;
        edx = t4;
        esi = t3;
    }
    if (esi != 0u)
    {
        g->esp = sp0 - 8u;
        t5 = cow_fastcall(g, COW_IMG(0x102f4b4cu), esi, edx, 1, arg1);
        t6 = g->edx;
        if ((int32_t)t5 >= 0)
        {
            wr32(arg2, esi);
            eax = 0u;
        }
        else
        {
            edx = t6;
            edi = t5;
            g->esp = sp0 - 8u;
            cow_fastcall(g, COW_IMG(0x102f490fu), esi, edx, 1, 1u);
            eax = edi;
        }
    }
    else
    {
        eax = 0x8007000eu;
    }
    return eax;
L_102f51ac: ;
    if (rd32(eax + 4u) == arg1) goto L_102f51d6;
    eax = rd32(eax + 0xacu);
    goto L_102f51b7;
L_102f51d6: ;
    wr32(eax, rd32(eax) + 1u);
    wr32(arg2, eax);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f51a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f51a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
