/* f_0x102d26bf - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102d26bf(Guest* g)
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    eax = t1;
    ecx = self;
    edx = in_edx;
    ebx = 0xffffffffu;
    edi = COW_IMG(0x10345708u);
L_102d271c: ;
    if (rd32(eax) != 0u)
    {
        eax = rd32(eax);
        goto L_102d26d5;
    }
    eax = rd32(edi);
L_102d2724: ;
    return eax;
L_102d26d5: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x102d2626u), 1, eax);
    t3 = g->edx;
    if (rd32(t2) == 0u)
    {
        ecx = eax;
        edx = t3;
        goto L_102d2715;
    }
    ecx = eax;
    eax = rd32(t2);
    edx = t3;
    esi = t2;
    if (rd32(esi + 4u) != 1u) goto L_102d26f0;
    if (arg2 == 0u) goto L_102d2715;
L_102d26f0: ;
    if (rd32(arg3) == eax) goto L_102d2729;
    g->esp = sp0 - 0x10u;
    t4 = cow_fastcall(g, COW_IMG(0x102d264au), arg3, esi, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0xffffffffu)
    {
        ecx = t5;
        edx = t6;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        if (eax <= ebx)
        {
            zf = eax == ebx;
            if (!zf) goto L_102d2711;
            if (rd32(esi + 8u) >= rd32(edi + 8u))
            {
                ecx = rd32(esi + 8u);
                goto L_102d2715;
            }
            ecx = rd32(esi + 8u);
L_102d2711: ;
            ebx = eax;
            edi = esi;
        }
    }
L_102d2715: ;
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 4u);
    eax = rd32(sp0 + 4u);
    goto L_102d271c;
L_102d2729: ;
    eax = rd32(arg3);
    goto L_102d2724;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d26bf(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d26bf(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
