/* f_0x100f10f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100f10f0(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x104df774u)) != 0u) goto L_100f1100;
    return 0u;
L_100f1100: ;
    ecx = self;
    edx = in_edx;
    ebx = 0u;
    edi = 0u;
L_100f1104: ;
    if (rd8(edi + rd32(COW_IMG(0x104df774u)) + 5u) != 0u)
    {
        esi = edi + rd32(COW_IMG(0x104df774u)) + 4u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t1 = cow_cdecl(g, COW_IMG(0x100f1160u), 1, esi);
        t2 = g->ecx;
        t3 = g->edx;
        if (t1 == 0u)
        {
            ecx = t2;
            edx = t3;
        }
        else
        {
            eax = t1;
            edx = t3;
            if (rd32(esi + 4u) == 0u)
            {
                ecx = rd32(esi + 4u);
                goto L_100f1137;
            }
            ecx = rd32(esi + 4u);
            t4 = rd32(esi + 0x1cu);
            g->eax = eax;
            g->edx = t4;
            g->esp = sp0 - 0xcu;
            t5 = cow_thiscall_cdecl(g, ecx, ecx, 2, eax, t4);
            t6 = g->ecx;
            t7 = g->edx;
            if ((uint8_t)t5 != 0u)
            {
                ecx = t6;
                edx = t7;
                goto L_100f1140;
            }
            eax = t5;
            ecx = t6;
            edx = t7;
L_100f1137: ;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x100f10c0u), 1, esi);
            t8 = g->ecx;
            t9 = g->edx;
            ecx = t8;
            edx = t9;
        }
L_100f1140: ;
        ebx = ebx + 1u;
    }
    if ((int32_t)(edi + 0x2cu) < 528)
    {
        edi = edi + 0x2cu;
        goto L_100f1104;
    }
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f10f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f10f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
