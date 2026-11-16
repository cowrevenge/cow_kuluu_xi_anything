/* f_0x101df210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101df210(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
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

    g->edi = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101f67c0u), self, 1, 0u);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(self, COW_IMG(0x103390c8u));
    if (rd32(COW_IMG(0x106631e8u)) != 0u)
    {
        ecx = t1;
        edx = t2;
    }
    else
    {
        ecx = t1;
        edx = t2;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t3 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x18u, in_edi, in_esi);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 == 0u)
        {
            ecx = t4;
            edx = t5;
            wr32(COW_IMG(0x106631e8u), 0u);
        }
        else
        {
            eax = t3;
            edx = t5;
            esi = t3;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x101c7f80u), esi, 0);
            t6 = g->ecx;
            t7 = g->edx;
            wr32(esi, COW_IMG(0x103390acu));
            wr32(COW_IMG(0x106631e8u), esi);
            ecx = t6;
            edx = t7;
        }
    }
    if (rd32(COW_IMG(0x106634a0u)) != 0u)
    {
        eax = rd32(COW_IMG(0x106634a0u));
    }
    else
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t8 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x1cu, in_edi, in_esi);
        t9 = g->ecx;
        t10 = g->edx;
        if (t8 == 0u)
        {
            eax = t8;
            ecx = t9;
            edx = t10;
            wr32(COW_IMG(0x106634a0u), 0u);
        }
        else
        {
            eax = t8;
            edx = t10;
            esi = t8;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t11 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t12 = g->ecx;
            t13 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339068u));
            wr32(COW_IMG(0x106634a0u), esi);
            eax = t11;
            ecx = t12;
            edx = t13;
        }
    }
    if (rd32(COW_IMG(0x106634a4u)) == 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t14 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, in_edi, in_esi);
        t15 = g->ecx;
        t16 = g->edx;
        if (t14 == 0u)
        {
            eax = t14;
            ecx = t15;
            edx = t16;
            wr32(COW_IMG(0x106634a4u), 0u);
        }
        else
        {
            eax = t14;
            edx = t16;
            esi = t14;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t17 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t18 = g->ecx;
            t19 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339020u));
            wr32(COW_IMG(0x106634a4u), esi);
            eax = t17;
            ecx = t18;
            edx = t19;
        }
    }
    if (rd32(COW_IMG(0x106634a8u)) == 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 8u;
        t20 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x20u, in_edi, in_esi);
        t21 = g->edx;
        if (t20 == 0u)
        {
            eax = t20;
            edx = t21;
            wr32(COW_IMG(0x106634a8u), 0u);
        }
        else
        {
            eax = t20;
            edx = t21;
            wr32(eax + 8u, 0u);
            wr32(eax + 4u, 0u);
            wr32(eax + 0xcu, 0u);
            wr32(eax, COW_IMG(0x10338ff4u));
            wr32(eax + 0x14u, 0u);
            wr32(COW_IMG(0x106634a8u), eax);
        }
    }
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x101f6700u), eax, self, edx, 0, 1, 0xau);
    if ((rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0x80u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        goto L_101df335;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    ecx = rd32(COW_IMG(0x10456a28u));
    if (eax == 2u) goto L_101df34e;
    if (eax == 3u) goto L_101df34e;
L_101df335: ;
    if ((int32_t)eax < 2) goto L_101df34e;
    if ((int32_t)eax > 3) goto L_101df34e;
    wr8(self + 0x9cu, 1u);
    wr32(self + 0x30u, COW_IMG(0x1037f1ccu));
L_101df35b: ;
    wr16(self + 0x16u, 3u);
    wr16(self + 0x26u, 0x12u);
    edx = 3u;
    ebp = self + 0x74u;
    esi = 0u;
L_101df36a: ;
    t22 = (eax & 0xffffff00u) | rd8(COW_IMG(0x1037f1dcu) + esi);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t23 = cow_cdecl(g, COW_IMG(0x10101bc0u), 1, t22);
    t24 = g->edx;
    wr8(esi + self + 0x69u, (uint8_t)t23);
    t25 = rd32(COW_IMG(0x1037f1e8u) + esi * 4u);
    wr32(ebp, t25);
    if ((int32_t)(esi + 1u) < 9)
    {
        eax = t23;
        ecx = t25;
        edx = t24;
        ebp = ebp + 4u;
        esi = esi + 1u;
        goto L_101df36a;
    }
    ecx = t25;
    edx = t24;
    wr32(self + 0x54u, 0u);
    wr32(self + 0x58u, 0u);
    wr32(self + 0x98u, 0u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t26 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x690u, in_edi, in_esi);
    t27 = g->edx;
    if (t26 == 0u) goto L_101df3cf;
    eax = t26;
    edx = t27;
    ebp = t26;
    ebx = 0x14u;
    esi = ebp;
L_101df3b8: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t28 = cow_thiscall(g, COW_IMG(0x101f4af0u), esi, 0);
    t29 = g->edx;
    if (ebx != 1u)
    {
        eax = t28;
        edx = t29;
        ebx = ebx - 1u;
        esi = esi + 0x54u;
        goto L_101df3b8;
    }
    wr32(self + 0x58u, ebp);
    g->edi = in_edi;
    return self;
L_101df34e: ;
    wr8(self + 0x9cu, 0u);
    wr32(self + 0x30u, COW_IMG(0x1037f1c4u));
    goto L_101df35b;
L_101df3cf: ;
    wr32(self + 0x58u, 0u);
    g->edi = in_edi;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101df210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101df210(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
