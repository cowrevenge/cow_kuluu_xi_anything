/* f_0x10313d5c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10313d5c(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((rd32(arg1 + 0xcu) & 0x83u) == 0u) goto L_10313dd8;
    eax = rd32(arg1 + 0xcu);
    if (arg3 == 0u) goto L_10313d7b;
    if (arg3 == 1u) goto L_10313d7b;
    if (arg3 != 2u) goto L_10313dd8;
L_10313d7b: ;
    t1 = (eax & 0xffffff00u) | (eax & 0xefu);
    wr32(arg1 + 0xcu, t1);
    if (arg3 != 1u)
    {
        ecx = self;
        edx = in_edx;
        edi = arg3;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0;
        t2 = cow_cdecl(g, COW_IMG(0x10313e0bu), 3, arg1, in_edi, in_esi);
        t3 = g->edx;
        wr32(sp0 + 8u, t2 + rd32(sp0 + 8u));
        ecx = arg1;
        edx = t3;
        edi = 0u;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10318845u), 1, arg1);
    t4 = g->edx;
    if ((rd32(arg1 + 0xcu) & 0x80u) == 0u)
    {
        eax = rd32(arg1 + 0xcu);
        edx = t4;
        if (eax & 1u)
        {
            if ((eax & 8u) != 0u)
            {
                if ((eax >> 8u & 4u) == 0u)
                {
                    wr32(arg1 + 0x18u, 0x200u);
                }
            }
        }
    }
    else
    {
        eax = rd32(arg1 + 0xcu);
        edx = t4;
        t5 = (eax & 0xffffff00u) | (eax & 0xfcu);
        wr32(arg1 + 0xcu, t5);
    }
    t6 = rd32(sp0 + 8u);
    t7 = rd32(arg1 + 0x10u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_cdecl(g, COW_IMG(0x1031f0f0u), 3, t7, t6, edi);
    t9 = g->edx;
    t10 = (t8 != 0xffffffffu) - 1u;
    eax = t10;
    edx = t9;
L_10313de6: ;
    g->edx = edx;
    return eax;
L_10313dd8: ;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t11 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    t12 = g->edx;
    wr32(t11, 0x16u);
    eax = 0xffffffffu;
    edx = t12;
    goto L_10313de6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10313d5c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10313d5c(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
