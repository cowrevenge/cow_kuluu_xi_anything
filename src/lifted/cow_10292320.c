/* f_0x10292320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10292320(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg4 != 0u) goto L_10292352;
    g->eax = arg4;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb100u));
    t2 = g->ecx;
    t3 = g->edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb1f8u), COW_IMG(0x103b379cu));
    return 0u;
L_10292352: ;
    if (arg1 != 0u) goto L_10292381;
    g->eax = arg4;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb100u));
    t5 = g->ecx;
    t6 = g->edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b464cu), COW_IMG(0x103b379cu));
    return 0u;
L_10292381: ;
    if (arg2 == 0u) goto L_102923f0;
    if (arg3 == 0u) goto L_102923f0;
    g->ecx = self;
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, in_edx, 1, 6, arg1, arg2, arg3, arg4, in_edi, in_esi);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        edi = t7;
    }
    else
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        edi = t7;
        if (rd8(COW_IMG(0x109f826au)) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x109f826au));
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x10292150u), 3, arg1, arg2, arg3);
            t10 = g->ecx;
            t11 = g->edx;
            ecx = t10;
            edx = t11;
        }
        if (edi != arg3)
        {
            if ((rd8(arg4 + 0xcu) & 0x20u) != 0u)
            {
                g->eax = arg4;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t12 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb100u));
                t13 = g->ecx;
                t14 = g->edx;
                g->esp = sp0 - 0x20u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb1d4u), arg3);
            }
        }
    }
    return edi;
L_102923f0: ;
    g->eax = arg4;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t15 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb100u));
    t16 = g->ecx;
    t17 = g->edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb1a8u), COW_IMG(0x103b379cu));
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10292320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10292320(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
