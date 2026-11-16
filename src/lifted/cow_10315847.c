/* f_0x10315847 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10315847(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(sp0 + 8u) > arg1)
    {
        edi = rd32(sp0 + 8u);
        wr32(sp0 + 8u, arg1 + arg3);
        eax = arg1 + arg3;
        ecx = arg3;
        edx = in_edx;
L_1031585f: ;
        ebx = arg1;
        esi = rd32(sp0 + 8u);
L_10315865: ;
        if (esi > edi) goto L_1031587b;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_thiscall_cdecl(g, arg4, ecx, 2, esi, ebx);
        t2 = g->edx;
        if ((int32_t)t1 <= 0)
        {
            eax = t1;
            ecx = ebx;
            edx = t2;
        }
        else
        {
            eax = t1;
            ecx = ebx;
            edx = t2;
            ebx = esi;
        }
        esi = arg3 + esi;
        goto L_10315865;
    }
L_10315892: ;
    g->ebx = in_ebx;
    return;
L_1031587b: ;
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x10315895u), 3, ebx, edi, arg3);
    t4 = g->ecx;
    t5 = g->edx;
    if (edi - arg3 > arg1)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        edi = edi - arg3;
        goto L_1031585f;
    }
    goto L_10315892;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10315847(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10315847(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
