/* f_0x10263f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10263f40(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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

    if (arg2 < 4u)
    {
        edx = in_edx;
        loc_4 = 0u;
        goto L_102640df;
    }
    if (arg3 != 0u) goto L_10263f6d;
    return 0x80004003u;
L_10263f6d: ;
    if (rd32(arg3) >= arg2)
    {
        eax = rd32(arg3);
        ebp = arg2;
    }
    else
    {
        eax = rd32(arg3);
        ebp = eax;
    }
    if (ebp > 0x30u) goto L_10264001;
    if (eax > 0x30u) goto L_10264001;
    if (ebp < 0xcu) goto L_10263fbd;
    if ((rd32(arg3 + 8u) & 0xfffffe20u) == 0u)
    {
        eax = rd32(arg3 + 8u);
        goto L_10263fa2;
    }
    return 0x80070057u;
L_10263fa2: ;
    if ((eax & 0x10u) == 0u) goto L_10263fbd;
    if ((rd8(arg1 + 4u) & 0x10u) != 0u) goto L_10263fbd;
    if (ebp >= 0x20u) goto L_10263fbd;
    return 0x80070057u;
L_10263fbd: ;
    if (ebp < 0x2cu) goto L_10263fda;
    if (rd32(arg3 + 0x28u) == 0u) goto L_10263fda;
    eax = rd32(arg3 + 0x28u);
    if (eax == rd32(arg1 + 0xcu)) goto L_10263fda;
    return 0x80070057u;
L_10263fda: ;
    if (ebp < 0x30u) goto L_1026400d;
    if (rd32(arg3 + 0x2cu) == 0u)
    {
        eax = rd32(arg3 + 0x2cu);
        goto L_10263ff7;
    }
    eax = rd32(arg3 + 0x2cu);
    if (eax == rd32(arg1 + 0x14u)) goto L_10263ff7;
    return 0x80070057u;
L_10263ff7: ;
    if (ebp < 0x10u) goto L_1026400d;
    if ((int32_t)eax >= (int32_t)rd32(arg3 + 0xcu)) goto L_1026400d;
L_10264001: ;
    return 0x80070057u;
L_1026400d: ;
    if (ebp < 0x28u)
    {
        ecx = self;
        edx = in_edx;
        loc_4 = 0u;
        goto L_10264045;
    }
    if ((rd8(arg3 + 8u) & 8u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        loc_4 = 0u;
        goto L_10264045;
    }
    if (rd32(arg3 + 0x24u) != 0u)
    {
        eax = rd32(arg3 + 0x24u);
        goto L_1026402b;
    }
    return 0x80004003u;
L_1026402b: ;
    g->esp = sp0 - 0x10u;
    t1 = cow_fastcall(g, COW_IMG(0x1026a660u), self, in_edx, 1, eax);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        loc_4 = t1;
        goto L_10264045;
    }
    edx = t3;
    loc_4 = t1;
    g->edx = edx;
    return 0x8007000eu;
L_10264045: ;
    if (ebp >= 0x24u)
    {
        t4 = rd32(arg3 + 0x20u);
        wr32(arg1 + 0x40u, t4);
    }
    if (ebp < 0xcu)
    {
        if (ebp >= 8u)
        {
            t7 = rd32(arg3 + 4u);
            wr32(arg1 + 8u, t7);
        }
    }
    else
    {
        t5 = (rd32(arg1 + 4u) & 0x20u) | rd32(arg3 + 8u);
        wr32(arg1 + 4u, t5);
        t6 = rd32(arg3 + 4u);
        wr32(arg1 + 8u, t6);
        ecx = t5;
        edx = t6;
    }
    if (ebp >= 0x10u)
    {
        t8 = rd32(arg3 + 0xcu);
        wr32(arg1 + 0x10u, t8);
        ecx = t8;
    }
    if (ebp >= 0x20u)
    {
        t9 = rd32(arg3 + 0x18u);
        wr32(arg1 + 0x28u, t9);
        t10 = rd32(arg3 + 0x1cu);
        wr32(arg1 + 0x2cu, t10);
        edx = t9;
    }
    if (ebp >= 0x18u)
    {
        t11 = rd32(arg3 + 0x10u);
        wr32(arg1 + 0x20u, t11);
        t12 = rd32(arg3 + 0x14u);
        wr32(arg1 + 0x24u, t12);
        ecx = t11;
        edx = t12;
    }
    if (ebp >= 0x28u)
    {
        if ((rd8(arg3 + 8u) & 8u) != 0u)
        {
            if (rd32(arg1 + 0x3cu) != 0u)
            {
                eax = rd32(arg1 + 0x3cu);
                g->esp = sp0 - 0x10u;
                cow_fastcall(g, COW_IMG(0x1026a640u), ecx, edx, 1, eax);
                t13 = g->edx;
                edx = t13;
            }
            wr32(arg1 + 0x3cu, loc_4);
        }
    }
    if (rd32(arg1 + 0x3cu) == 0u)
    {
        eax = rd32(arg1 + 4u);
        goto L_102640da;
    }
    eax = rd32(arg1 + 4u);
    t14 = (eax & 0xffffff00u) | (uint8_t)(eax | 8u);
    wr32(arg1 + 4u, t14);
    g->edx = edx;
    return 0u;
L_102640da: ;
    t15 = (eax & 0xffffff00u) | (eax & 0xf7u);
    wr32(arg1 + 4u, t15);
L_102640df: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10263f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10263f40(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
