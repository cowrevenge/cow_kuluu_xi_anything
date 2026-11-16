/* f_0x10252ae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10252ae0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u)
    {
        if ((rd8(arg1) & 4u) != 0u)
        {
            if ((int32_t)rd32(rd32(arg1 + 0x20u) + 0x44u) > 0)
            {
                eax = rd32(rd32(arg1 + 0x20u) + 0x44u);
                ebx = rd32(arg1 + 0x20u);
                ecx = self;
                edx = in_edx;
                edi = 0u;
L_10252b01: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t1 = cow_cdecl(g, COW_IMG(0x10279890u), 2, ebx, edi);
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
                            esi = rd32(eax + 0x64u);
                            t3 = rd32(arg2 + 8u);
                            t4 = rd32(arg2 + 4u);
                            t5 = rd32(arg2);
                            g->esp = sp0 - 0x10u;
                            cow_cdecl(g, COW_IMG(0x10274690u), 4, esi + 0x5cu, t5, t4, t3);
                            t6 = rd32(arg3 + 8u);
                            t7 = rd32(arg3 + 4u);
                            g->ecx = rd32(arg3);
                            g->edx = t6;
                            t8 = rd32(arg3);
                            cow_cdecl(g, COW_IMG(0x1027ab00u), 8, esi + 0x68u, t8, t7, t6, esi + 0x5cu, t5, t4, t3);
                            t9 = g->ecx;
                            t10 = g->edx;
                            ecx = t9;
                            edx = t10;
                        }
                    }
                }
                if ((int32_t)(edi + 1u) < (int32_t)rd32(ebx + 0x44u))
                {
                    eax = rd32(ebx + 0x44u);
                    edi = edi + 1u;
                    goto L_10252b01;
                }
            }
        }
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10252ae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10252ae0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
