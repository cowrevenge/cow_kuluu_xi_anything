/* f_0x102704e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102704e0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0xffffffffu)
    {
        ecx = arg1;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1099aeccu)) - 1u;
    }
    t1 = rd32(COW_IMG(0x1099aed0u));
    t2 = rd32(ecx * 0xacu + rd32(COW_IMG(0x1099aed0u)) + 0xa8u);
    wr32(ecx * 0xacu + t1 + 0x84u, arg2);
    if (t2 != 0u)
    {
        ecx = t1;
        esi = t2;
        if ((int32_t)rd32(esi + 0x44u) > 0)
        {
            eax = rd32(esi + 0x44u);
            edx = arg2;
            edi = 0u;
L_1027052c: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t3 = cow_cdecl(g, COW_IMG(0x10279890u), 2, esi, edi);
            t4 = g->edx;
            if (rd32(t3) != 0xb0001u)
            {
                ecx = rd32(t3);
                edx = t4;
            }
            else
            {
                eax = t3;
                ecx = rd32(t3);
                edx = t4;
                if (rd32(rd32(eax + 0x1cu) + 0x68u) != 0u)
                {
                    eax = rd32(rd32(eax + 0x1cu) + 0x68u);
                    if (rd32(eax + 0x64u) != 0u)
                    {
                        eax = rd32(eax + 0x64u);
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0xcu;
                        cow_cdecl(g, COW_IMG(0x10274690u), 4, eax + 0x78u, arg2, arg2, arg2);
                        t5 = g->ecx;
                        t6 = g->edx;
                        ecx = t5;
                        edx = t6;
                    }
                }
            }
            if ((int32_t)(edi + 1u) < (int32_t)rd32(esi + 0x44u))
            {
                eax = rd32(esi + 0x44u);
                edi = edi + 1u;
                goto L_1027052c;
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102704e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102704e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
