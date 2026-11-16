/* f_0x10130d30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10130d30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(arg2 + 0x14d0u) == 0u) goto L_10130e2b;
    eax = rd32(arg2 + 0x14d0u);
    if (rd16(eax) == 0u) goto L_10130e2b;
    if (rd32(arg2 + 0x14d8u) == 0u) goto L_10130e2b;
    eax = rd32(arg2 + 0x14d8u);
    if (rd16(eax) == 0u) goto L_10130e2b;
    if (rd32(arg2 + 0x14d4u) == 0u) goto L_10130e2b;
    eax = rd32(arg2 + 0x14d4u);
    if ((rd16(eax) & 0x1f7u) == 0u) goto L_10130e2b;
    t1 = (eax & 0xffffff00u) | rd8(self + 6u);
    g->ecx = rd32(COW_IMG(0x105781a8u));
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x105781a8u));
    g->esp = sp0 - 8u;
    t3 = cow_stdcall(g, COW_IMG(0x10132140u), 2, t1, arg2);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        goto L_10130d9f;
    }
    edx = t5;
    g->edx = edx;
    return 0x80404040u;
L_10130d9f: ;
    if (rd8(self + 4u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 4u);
        goto L_10130dbe;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 4u);
    if (rd8(self + 5u) != rd8(arg1 + 2u))
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 2u);
        ecx = (ecx & 0xffffff00u) | rd8(self + 5u);
        goto L_10130dbe;
    }
    g->edx = edx;
    return 0x80804020u;
L_10130dbe: ;
    t6 = rd32(self + 0xcu);
    t7 = (eax & 0xffff0000u) | rd16(self + 8u);
    t8 = (ecx & 0xffffff00u) | rd8(arg1 + 2u);
    g->edx = t6;
    g->esp = sp0 - 8u;
    t9 = cow_call_regs(g, COW_IMG(0x101334c0u), t7, rd32(COW_IMG(0x105781b8u)), g->edx, 0, 3, t8, t7, t6);
    t10 = g->edx;
    if ((uint8_t)t9 == 0u)
    {
        eax = t9;
        edx = t10;
        goto L_10130de4;
    }
    edx = t10;
    g->edx = edx;
    return 0x80509050u;
L_10130de4: ;
    t11 = (edx & 0xffffff00u) | rd8(arg1 + 2u);
    g->edx = t11;
    g->esp = sp0 - 8u;
    t12 = cow_call_regs(g, COW_IMG(0x101334c0u), eax, rd32(COW_IMG(0x105781b8u)), g->edx, 0, 3, t11, 0xffffffffu, 1u);
    t13 = g->edx;
    if ((uint8_t)t12 == 0u)
    {
        eax = t12;
        edx = t13;
        goto L_10130e05;
    }
    edx = t13;
    g->edx = edx;
    return 0x80404040u;
L_10130e05: ;
    t14 = (eax & 0xffffff00u) | rd8(arg1 + 2u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_call_regs(g, COW_IMG(0x101334c0u), t14, rd32(COW_IMG(0x105781b8u)), g->edx, 0, 3, t14, 0xffffffffu, 9u);
    t16 = g->edx;
    g->edx = t16;
    return (-((uint8_t)t15 != 0u) & 0xffbfbfc0u) - 0x7f7f7f80u;
L_10130e2b: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10130d30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10130d30(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
