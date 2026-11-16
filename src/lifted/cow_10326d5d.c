/* f_0x10326d5d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10326d5d(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_10326d6c;
    return 0u;
L_10326d6c: ;
    if (rd32(arg1) == 0u)
    {
        ecx = 0u;
        edx = in_edx;
        goto L_10326d7e;
    }
    eax = arg1 + 4u;
    ecx = 0u;
L_10326d74: ;
    if (rd32(eax) != 0u)
    {
        eax = eax + 4u;
        ecx = ecx + 1u;
        goto L_10326d74;
    }
    ecx = ecx + 1u;
    edx = rd32(eax);
L_10326d7e: ;
    t1 = ecx * 4u + 4u;
    g->eax = t1;
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10312fd6u), g->eax, ecx, edx, 1, 3, t1, in_esi, in_ebp);
    t3 = g->edx;
    if (t2 != 0u)
    {
        ecx = t1;
        edx = t3;
        ebp = t2;
        esi = t2;
    }
    else
    {
        eax = t2;
        ecx = t1;
        edx = t3;
        ebp = t2;
        esi = t2;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x1031680cu), 1, 9u);
        t4 = g->edx;
        ecx = 9u;
        edx = t4;
    }
    eax = rd32(arg1);
    ebx = arg1;
L_10326da3: ;
    if (eax == 0u) goto L_10326dba;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x103178c5u), eax, g->ecx, g->edx, 1, 3, eax, in_esi, in_ebp);
    t6 = g->edx;
    wr32(esi, t5);
    ecx = eax;
    eax = rd32(ebx + 4u);
    edx = t6;
    ebx = ebx + 4u;
    esi = esi + 4u;
    goto L_10326da3;
L_10326dba: ;
    wr32(esi, 0u);
    g->edx = edx;
    return ebp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10326d5d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10326d5d(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
