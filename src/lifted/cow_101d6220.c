/* f_0x101d6220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101d6220(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t16;
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

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x101cc0a0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_101d6259;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    if (!(rd8(COW_IMG(0x10485824u)) & 1u)) goto L_101d6241;
    if (rd16(COW_IMG(0x1048567au)) >= 3u) goto L_101d6252;
L_101d6241: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x10097e20u), eax, g->ecx, g->edx, 1, 1, 0x86du);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        ecx = t5;
        edx = t6;
        goto L_101d6259;
    }
    ecx = t5;
    edx = t6;
L_101d6252: ;
    eax = 1u;
L_101d625b: ;
    wr8(self + 0x19u, (uint8_t)eax);
    g->ecx = ecx;
    g->edx = edx;
    t7 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 0xcu;
    t8 = cow_cdecl(g, COW_IMG(0x100f9760u), 1, t7);
    t9 = g->ecx;
    t10 = g->edx;
    g->ecx = t9;
    g->edx = t10;
    t11 = cow_call_regs(g, COW_IMG(0x10097b40u), t8, g->ecx, g->edx, 1, 0);
    t12 = g->ecx;
    t13 = g->edx;
    g->ecx = t12;
    g->edx = t13;
    t14 = cow_stdcall(g, COW_IMG(0x101cc0a0u), 0);
    t15 = g->ecx;
    t16 = g->edx;
    if (t11 << 0x18u >> 0x18u == 0u)
    {
        edx = t16;
        loc_4 = (self & 0xffffffu) | (uint8_t)t11 << 0x18u;
        goto L_101d62a4;
    }
    eax = t14;
    edx = t16;
    ebx = (t8 & 0xffffff00u) | (t8 & 1u);
    loc_4 = (self & 0xffffffu) | (uint8_t)t11 << 0x18u;
    if ((uint8_t)eax == 0u) goto L_101d62a4;
    if (rd8(self + 0x1bu) != 0u) goto L_101d62a4;
    if ((uint8_t)ebx == 0u) goto L_101d62a4;
    wr8(self + 0x1au, 1u);
    g->edx = edx;
    return 1u;
L_101d6259: ;
    eax = 0u;
    goto L_101d625b;
L_101d62a4: ;
    wr8(self + 0x1au, 0u);
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d6220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d6220(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
