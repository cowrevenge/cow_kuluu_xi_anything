/* f_0x100e1c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=12 */
uint32_t cow_fn_100e1c30(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg11 = rd32(g->esp + 0x2cu);
    const uint32_t arg12 = rd32(g->esp + 0x30u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u) goto L_100e1c6d;
    if (rd16(arg1 + 8u) == 0u) goto L_100e1c6d;
    if (rd32(arg1 + 4u) == 0u) goto L_100e1c6d;
    ecx = 0u;
L_100e1c4a: ;
    if (rd32(arg1 + (uint16_t)ecx * 0x7d4u + 0x1f20u) == 0u) goto L_100e1c73;
    if ((uint16_t)(ecx + 1u) < 2u)
    {
        ecx = ecx + 1u;
        goto L_100e1c4a;
    }
L_100e1c6d: ;
    return 0u;
L_100e1c73: ;
    if (arg1 + (uint16_t)ecx * 0x7d4u + 0x1f0cu == 0u) goto L_100e1c6d;
    edx = (uint16_t)ecx * 0x7du;
    ebp = arg1 + (uint16_t)ecx * 0x7d4u + 0x1f0cu;
    if (rd32(ebp + 0x14u) != 0u)
    {
        eax = rd32(ebp + 0x14u);
        t1 = rd32(ebp + 0x18u);
        g->esp = sp0 - 0xcu;
        cow_thiscall_cdecl(g, eax, t1, 2, t1, 0u);
    }
    wr8(ebp + 4u, 0u);
    wr32(ebp, 0u);
    wr32(ebp + 0x14u, 0u);
    wr32(ebp + 0x18u, 0u);
    wr16(ebp + 0x1cu, 0u);
    wr8(ebp + 5u, 0u);
    wr16(ebp + 6u, 0u);
    wr16(ebp + 0x7b0u, 0u);
    wr16(ebp + 0x7b2u, 2u);
    wr32(ebp + 0x7b4u, 0u);
    if (arg2 == 0u)
    {
        if (arg3 == 0u) goto L_100e1d9f;
        esi = arg3;
        edi = ebp + 0x20u;
        ecx = 0x15u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(ebp + 0x7b4u, COW_IMG(0x100e16a0u));
        wr32(ebp + 0x7b8u, COW_IMG(0x100e1f20u));
        wr32(ebp + 0x7bcu, COW_IMG(0x100e2060u));
        wr16(ebp + 8u, 1u);
L_100e1e83: ;
        eax = 3u;
        edx = arg2;
    }
    else
    {
        if ((rd32(arg2) & 0x1001000u) == 0u)
        {
            ecx = 0x1au;
            edi = ebp + 0x20u;
        }
        else
        {
            edi = ebp + 0x20u;
            ecx = 0x1e4u;
        }
        esi = arg2;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(ebp + 0x7b4u, COW_IMG(0x100e16a0u));
        wr32(ebp + 0x7b8u, COW_IMG(0x100e1ee0u));
        wr32(ebp + 0x7bcu, COW_IMG(0x100e2060u));
        wr16(ebp + 8u, 0u);
        if ((rd8(arg2) & 2u) == 0u) goto L_100e1d36;
        ecx = (ecx & 0xffffff00u) | rd8(arg2);
        if ((int16_t)rd16(arg2 + 0x22u) <= 0) goto L_100e1d36;
        ecx = (ecx & 0xffff0000u) | rd16(arg2 + 0x22u);
        ecx = (uint16_t)ecx;
L_100e1d38: ;
        wr16(ebp + 0xau, (uint16_t)ecx);
        if ((uint16_t)ecx == 0u) goto L_100e1d59;
        if ((int16_t)rd16(arg2 + 0x26u) <= 0) goto L_100e1d59;
        edx = (arg2 & 0xffff0000u) | rd16(arg2 + 0x26u);
        wr16(ebp + 0xcu, (uint16_t)edx);
        eax = 3u;
        edx = (uint16_t)edx;
    }
L_100e1e88: ;
    wr32(ebp + (uint16_t)eax * 4u + 0x7b4u, 0u);
    wr32(ebp + 0x18u, arg11);
    wr16(ebp + 0xeu, (uint16_t)arg8);
    wr32(ebp + 0x14u, arg10);
    wr32(ebp + 0x10u, arg9);
    if ((uint16_t)arg12 >= 1u)
    {
        eax = (uint16_t)arg12;
    }
    else
    {
        eax = 1u;
    }
    wr16(ebp + 0x1cu, (uint16_t)eax);
    wr16(ebp + 0x1eu, 0u);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x100dbe10u), arg10, 0);
    wr32(ebp, t2);
    return ebp;
L_100e1d36: ;
    ecx = 0u;
    goto L_100e1d38;
L_100e1d59: ;
    wr16(ebp + 0xcu, 0u);
    eax = 3u;
    edx = 0u;
    goto L_100e1e88;
L_100e1d9f: ;
    if (arg4 == 0u) goto L_100e1dda;
    esi = arg4;
    edi = ebp + 0x20u;
    ecx = 5u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(ebp + 0x7b4u, COW_IMG(0x100e16a0u));
    wr32(ebp + 0x7b8u, COW_IMG(0x100e1fa0u));
    wr32(ebp + 0x7bcu, COW_IMG(0x100e2060u));
    wr16(ebp + 8u, 2u);
    goto L_100e1e83;
L_100e1dda: ;
    if (arg5 == 0u) goto L_100e1e15;
    esi = arg5;
    edi = ebp + 0x20u;
    ecx = 0x2au;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(ebp + 0x7b4u, COW_IMG(0x100e16a0u));
    wr32(ebp + 0x7b8u, COW_IMG(0x100e2020u));
    wr32(ebp + 0x7bcu, COW_IMG(0x100e2060u));
    wr16(ebp + 8u, 3u);
    eax = 3u;
    edx = arg2;
    goto L_100e1e88;
L_100e1e15: ;
    if (arg6 == 0u) goto L_100e1e4d;
    esi = arg6;
    edi = ebp + 0x20u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(ebp + 0x7b4u, COW_IMG(0x100e16a0u));
    wr32(ebp + 0x7b8u, COW_IMG(0x100e1f60u));
    wr32(ebp + 0x7bcu, COW_IMG(0x100e2060u));
    wr16(ebp + 8u, 4u);
    goto L_100e1e83;
L_100e1e4d: ;
    if (arg7 == 0u)
    {
        eax = 0u;
        edx = arg2;
        goto L_100e1e88;
    }
    esi = arg7;
    edi = ebp + 0x20u;
    ecx = 0x101u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(ebp + 0x7b4u, COW_IMG(0x100e16a0u));
    wr32(ebp + 0x7b8u, COW_IMG(0x100e1fe0u));
    wr32(ebp + 0x7bcu, COW_IMG(0x100e2060u));
    wr16(ebp + 8u, 5u);
    goto L_100e1e83;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e1c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e1c30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
