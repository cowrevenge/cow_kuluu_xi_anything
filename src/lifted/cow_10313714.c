/* f_0x10313714 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10313714(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u) goto L_103137e2;
    if (arg3 == 0u)
    {
        eax = 0u;
        goto L_1031380f;
    }
    if (rd32(COW_IMG(0x109b27b8u)) != 0u) goto L_10313765;
    if (arg3 == 0u)
    {
        eax = 0u;
        goto L_1031380f;
    }
    eax = 0u;
    edx = arg1;
    esi = 0u;
L_10313744: ;
    t1 = rd32(sp0 + 8u);
    t2 = rd8(eax + rd32(sp0 + 8u));
    wr16(edx, (uint16_t)t2);
    if (rd8(eax + t1) == 0u) goto L_1031380f;
    esi = (esi & 0xffff0000u) | t2;
    if (eax + 1u < arg3)
    {
        eax = eax + 1u;
        edx = edx + 2u;
        goto L_10313744;
    }
    eax = eax + 1u;
L_1031380f: ;
    return eax;
L_10313765: ;
    t3 = rd32(sp0 + 8u);
    g->eax = 0u;
    g->edx = arg1;
    t4 = rd32(COW_IMG(0x10329144u));
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, t4, self, 6, rd32(COW_IMG(0x109b27c8u)), 9u, t3, 0xffffffffu, arg1, arg3);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        goto L_1031380e;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    ebx = t3;
    esi = t4;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_thiscall(g, rd32(COW_IMG(0x10329168u)), ecx, 0);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0x7au)
    {
        edx = t10;
        goto L_103137a0;
    }
    ecx = t9;
    edx = t10;
L_10313790: ;
    g->esp = sp0 - 0x10u;
    t21 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    wr32(t21, 0x2au);
    eax = 0xffffffffu;
    goto L_1031380f;
L_103137a0: ;
    wr32(sp0 + 8u, arg3 - 1u);
    eax = ebx;
    ecx = arg3 - 1u;
L_103137a8: ;
    if (rd8(eax) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        goto L_103137ca;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    if ((rd8((uint8_t)ecx * 2u + rd32(COW_IMG(0x103d0030u)) + 1u) & 0x80u) == 0u)
    {
        edx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        edx = rd32(COW_IMG(0x103d0030u));
        eax = eax + 1u;
    }
    t11 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t11 - 1u);
    if (t11 != 0u)
    {
        eax = eax + 1u;
        ecx = t11;
        goto L_103137a8;
    }
    eax = eax + 1u;
    ecx = t11;
L_103137ca: ;
    g->eax = eax - ebx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t12 = cow_thiscall(g, esi, ecx, 6, rd32(COW_IMG(0x109b27c8u)), 1u, ebx, eax - ebx, arg1, arg3);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 != 0u)
    {
        eax = t12;
        goto L_1031380f;
    }
    ecx = t13;
    edx = t14;
    goto L_10313790;
L_103137e2: ;
    if (rd32(COW_IMG(0x109b27b8u)) != 0u) goto L_103137f5;
    t15 = rd32(sp0 + 8u);
    g->esp = sp0 - 0x10u;
    t16 = cow_call_regs(g, COW_IMG(0x10317480u), 0u, g->ecx, g->edx, 1, 1, t15);
    eax = t16;
    goto L_1031380f;
L_103137f5: ;
    t17 = rd32(sp0 + 8u);
    g->eax = 0u;
    g->edx = arg1;
    g->esp = sp0 - 0x10u;
    t18 = cow_thiscall(g, rd32(COW_IMG(0x10329144u)), self, 6, rd32(COW_IMG(0x109b27c8u)), 9u, t17, 0xffffffffu, 0u, 0u);
    t19 = g->ecx;
    t20 = g->edx;
    if (t18 == 0u)
    {
        ecx = t19;
        edx = t20;
        goto L_10313790;
    }
    eax = t18;
L_1031380e: ;
    eax = eax - 1u;
    goto L_1031380f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10313714(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10313714(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
