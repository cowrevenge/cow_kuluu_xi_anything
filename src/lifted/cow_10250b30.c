/* f_0x10250b30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10250b30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    if (arg3 != 0xffffffffu) goto L_10250b6f;
    t1 = rd32(arg1) ^ 0x1000u;
    t2 = rd32(arg1);
    wr32(arg1, t1);
    if (((t2 ^ 0x1000u) >> 8u & 0x10u) == 0u)
    {
        ecx = 0xffffffffu;
        edx = t1;
    }
    else
    {
        edx = t1;
        ecx = arg2;
    }
L_10250b8e: ;
    wr32(arg1 + 0x24u, ecx);
L_10250b91: ;
    if ((rd32(arg1) >> 8u & 0x10u) == 0u) goto L_10250be4;
    if ((int32_t)rd32(arg1 + 0xd4u) < 0) goto L_10250c1a;
    ecx = rd32(arg1 + 0xd4u);
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, 0x3f91361eu);
    wr32(sp0 - 8u, 0x41200000u);
    t6 = rd32(COW_IMG(0x103890f4u) + rd32(arg1 + 0x24u) * 0x24u);
    wr32(sp0 - 0xcu, t6);
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, ecx);
    t7 = rd32(COW_IMG(0x103890f8u) + rd32(arg1 + 0x24u) * 0x24u);
    wr32(sp0 - 4u, t7);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102701d0u), 5, ecx, 2u, sp0 - 0xcu, 0x3f91361eu, 1u);
    return 0u;
L_10250b6f: ;
    if (arg3 == 0u) goto L_10250b87;
    t3 = rd32(arg1);
    wr32(arg1 + 0x24u, arg2);
    t4 = (t3 & 0xffff00ffu) | (uint8_t)(t3 >> 8u | 0x10u) << 8u;
    wr32(arg1, t4);
    edx = arg2;
    goto L_10250b91;
L_10250b87: ;
    t5 = (rd32(arg1) & 0xffff00ffu) | (rd32(arg1) >> 8u & 0xefu) << 8u;
    wr32(arg1, t5);
    ecx = 0xffffffffu;
    edx = t5;
    goto L_10250b8e;
L_10250be4: ;
    if ((int32_t)rd32(arg1 + 0xd4u) >= 0)
    {
        eax = rd32(arg1 + 0xd4u);
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, 2u);
        wr32(sp0 - 0x20u, eax);
        wr32(sp0 - 0xcu, 0u);
        wr32(sp0 - 8u, 0u);
        wr32(sp0 - 4u, 0u);
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x102701d0u), 5, eax, 2u, sp0 - 0xcu, 0u, 0u);
    }
L_10250c1a: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10250b30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10250b30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
