/* f_0x10252b70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10252b70(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0u)
    {
        if ((rd8(arg1) & 4u) != 0u)
        {
            if ((int32_t)rd32(rd32(arg1 + 0x20u) + 0x44u) > 0)
            {
                eax = rd32(rd32(arg1 + 0x20u) + 0x44u);
                edi = rd32(arg1 + 0x20u);
                ecx = self;
                edx = in_edx;
                esi = 0u;
L_10252b90: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t1 = cow_cdecl(g, COW_IMG(0x10279890u), 2, edi, esi);
                t2 = g->edx;
                if (rd32(t1) != 0xb0001u)
                {
                    ecx = rd32(t1);
                    edx = t2;
                }
                else
                {
                    eax = t1;
                    ecx = rd32(t1);
                    edx = t2;
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
                            t3 = g->ecx;
                            t4 = g->edx;
                            ecx = t3;
                            edx = t4;
                        }
                    }
                }
                if ((int32_t)(esi + 1u) < (int32_t)rd32(edi + 0x44u))
                {
                    eax = rd32(edi + 0x44u);
                    esi = esi + 1u;
                    goto L_10252b90;
                }
            }
        }
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10252b70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10252b70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
