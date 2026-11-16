/* f_0x102a4410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102a4410(Guest* g)
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
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg2 < 0)
    {
        eax = in_eax;
        ecx = self;
        goto L_102a4576;
    }
    if ((int32_t)arg2 >= (int32_t)rd32(rd32(rd32(arg1 + 0x2cu) + 0x3cu) + 0x24u))
    {
        eax = rd32(arg1 + 0x2cu);
        ecx = rd32(rd32(arg1 + 0x2cu) + 0x3cu);
        goto L_102a4576;
    }
    ecx = rd32(rd32(arg1 + 0x2cu) + 0x3cu);
    if (rd32(COW_IMG(0x109a285cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x109a285cu));
        edx = in_edx;
        goto L_102a4448;
    }
    eax = rd32(COW_IMG(0x109a285cu));
    if ((int32_t)rd32(ecx + 0x1cu) <= (int32_t)rd32(COW_IMG(0x109a2860u))) goto L_102a446d;
    edx = rd32(ecx + 0x1cu);
L_102a4448: ;
    t1 = rd32(ecx + 0x1cu);
    wr32(COW_IMG(0x109a2860u), t1);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), t1 << 3u, 4, eax, t1 << 3u, COW_IMG(0x103bd8d4u), 0x1c8u);
    wr32(COW_IMG(0x109a285cu), t2);
    eax = t2;
L_102a446d: ;
    if (rd32(rd32(arg1 + 0x2cu) + 0x24u) != 0xffffffffu) goto L_102a44cb;
    ecx = rd32(arg1 + 0x2cu);
    edx = rd32(arg1 + 0x2cu) + 0x24u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x1027d920u), ecx + 0x40u, 3, edx, ecx + 0x40u, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)t3 >= 0) goto L_102a44bc;
    eax = t3;
    ecx = t4;
    edx = t5;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bd8d4u));
    t7 = g->ecx;
    t8 = rd32(arg1 + 0x2cu) + 0x40u;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdb7cu), t8);
    return 0u;
L_102a44bc: ;
    wr32(rd32(arg1 + 0x2cu) + 0x2cu, 0xffffffffu);
    eax = rd32(COW_IMG(0x109a285cu));
L_102a44cb: ;
    if (arg2 != rd32(rd32(arg1 + 0x2cu) + 0x2cu))
    {
        ecx = rd32(arg1 + 0x2cu);
        if ((int32_t)(arg2 & 0x80000001u) >= 0)
        {
            edx = arg2 & 0x80000001u;
        }
        else
        {
            edx = ((arg2 & 0x80000001u) - 1u | 0xfffffffeu) + 1u;
        }
        t9 = eax + edx * rd32(COW_IMG(0x109a2860u)) * 4u;
        wr32(rd32(ecx + 0x3cu) + 0x2cu, t9);
        if (arg2 != rd32(rd32(arg1 + 0x2cu) + 0x2cu) + 1u)
        {
            eax = rd32(arg1 + 0x2cu);
            ecx = rd32(rd32(arg1 + 0x2cu) + 0x2cu);
            goto L_102a4522;
        }
        eax = rd32(arg1 + 0x2cu);
        ecx = rd32(rd32(arg1 + 0x2cu) + 0x2cu);
        if ((int32_t)ecx < 0) goto L_102a4522;
        t10 = rd32(rd32(eax + 0x3cu) + 0x1cu);
        t11 = rd32(rd32(eax + 0x3cu) + 0x2cu);
        t12 = rd32(eax + 0x24u);
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x1027d6e0u), 6, t12, t11, 4u, t10, in_edi, in_esi);
L_102a455e: ;
        wr32(rd32(arg1 + 0x2cu) + 0x2cu, arg2);
    }
L_102a4564: ;
    return rd32(arg1 + 0x24u) * 4u + rd32(rd32(rd32(arg1 + 0x2cu) + 0x3cu) + 0x2cu);
L_102a4522: ;
    if (arg2 == ecx - 1u) goto L_102a4564;
    t13 = rd32(eax + 0x28u) + rd32(rd32(eax + 0x3cu) + 0x1cu) * arg2 * 4u;
    t14 = rd32(eax + 0x24u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1031f0f0u), 3, t14, t13, 0u);
    t15 = rd32(rd32(rd32(arg1 + 0x2cu) + 0x3cu) + 0x1cu);
    t16 = rd32(rd32(rd32(arg1 + 0x2cu) + 0x3cu) + 0x2cu);
    t17 = rd32(rd32(arg1 + 0x2cu) + 0x24u);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x1027d6e0u), 6, t17, t16, 4u, t15, t14, t13);
    goto L_102a455e;
L_102a4576: ;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bd8d4u));
    t18 = rd32(rd32(rd32(arg1 + 0x2cu) + 0x3cu) + 0x24u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb414u), arg2);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a4410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a4410(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
