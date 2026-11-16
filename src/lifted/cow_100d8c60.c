/* f_0x100d8c60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100d8c60(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        edi = 1u;
    }
    else
    {
        t1 = rd32(arg1 + 0x46cu);
        g->eax = t1;
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, rd32(COW_IMG(0x103291c8u)), self, 2, t1, 0x32u);
        t3 = g->ecx;
        if (t2 != 0u)
        {
            edi = 1u;
        }
        else
        {
            ecx = t3;
            if (rd32(arg1 + 0x460u) != 0u)
            {
                eax = rd32(arg1 + 0x460u);
                edi = 1u;
            }
            else
            {
                eax = rd32(arg1 + 0x460u);
                t4 = rd32(sp0 + 8u);
                wr16(arg1 + 0x484u, 0x10u);
                wr8(arg1 + 0x486u, 0x80u);
                t5 = rd8(t4 + 0x4eu);
                wr8(arg1 + 0x487u, -((t5 & 2u) != 0u) & 3u);
                wr16(arg1 + 0x488u, 0u);
                wr16(arg1 + 0x48au, 0u);
                g->eax = eax;
                g->esp = sp0 - 0x10u;
                t6 = cow_cdecl(g, COW_IMG(0x101041e0u), 2, t4, arg1 + 0x48cu);
                wr16(arg1 + 0x484u, (uint16_t)((uint16_t)t6 + rd16(arg1 + 0x484u)));
                t7 = arg1 + rd16(arg1 + 0x484u) + 0x47cu;
                if ((rd32(t4) >> 8u & 0x10u) == 0u)
                {
                    eax = rd32(t4);
                    edx = t7;
                    ebx = t4;
                }
                else
                {
                    eax = rd32(t4);
                    edx = t7;
                    ebx = t4;
                    if (rd16(ebx + 0x68u) <= 0xc8u)
                    {
                        eax = (eax & 0xffff0000u) | rd16(ebx + 0x68u);
                    }
                    else
                    {
                        eax = 0xc8u;
                    }
                    wr16(edx, (uint16_t)eax);
                    wr16(arg1 + 0x484u, (uint16_t)(rd16(arg1 + 0x484u) + 2u));
                    if ((uint16_t)eax == 0u)
                    {
                        edx = edx + 2u;
                    }
                    else
                    {
                        edx = edx + 2u;
                        t8 = (uint16_t)eax << 2u;
                        esi = ebx + 0x6cu;
                        edi = edx;
                        ecx = t8 >> 2u;
                        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                        wr32(sp0 + 8u, t8);
                        ecx = t8 & 3u;
                        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                        wr16(arg1 + 0x484u, (uint16_t)((uint16_t)t8 + rd16(arg1 + 0x484u)));
                        eax = t8;
                        edx = edx + t8;
                    }
                }
                if ((rd32(ebx) & 0x1000000u) != 0u)
                {
                    if (rd16(ebx + 0x38cu) <= 0x40u)
                    {
                        eax = (eax & 0xffff0000u) | rd16(ebx + 0x38cu);
                    }
                    else
                    {
                        eax = 0x40u;
                    }
                    wr16(edx, (uint16_t)eax);
                    wr16(arg1 + 0x484u, (uint16_t)(rd16(arg1 + 0x484u) + 2u));
                    if ((uint16_t)eax != 0u)
                    {
                        t9 = (uint16_t)eax << 4u;
                        esi = ebx + 0x390u;
                        edi = edx + 2u;
                        ecx = t9 >> 2u;
                        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                        ecx = t9 & 3u;
                        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                        wr16(arg1 + 0x484u, (uint16_t)((uint16_t)t9 + rd16(arg1 + 0x484u)));
                        edx = t9;
                    }
                }
                wr32(arg1 + 0x480u, 0x46465849u);
                t10 = rd16(arg1 + 0x484u);
                wr32(arg1 + 0x47cu, t10);
                if (rd32(arg1 + 0x18u) == 0u)
                {
                    eax = t10;
                }
                else
                {
                    eax = t10;
                    ecx = rd32(arg1 + 0x18u);
                    t11 = rd32(arg1 + 0x1cu);
                    g->eax = t11;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t12 = cow_thiscall_cdecl(g, ecx, ecx, 3, t11, arg1 + 0x47cu, eax);
                    t13 = g->edx;
                    wr32(arg1 + 0x47cu, t12);
                    eax = t12;
                    edx = t13;
                }
                t14 = rd32(arg1 + 0x470u);
                wr32(arg1 + 0x460u, 5u);
                g->eax = eax;
                g->esp = sp0 - 0x10u;
                t15 = cow_thiscall(g, rd32(COW_IMG(0x103291d8u)), t14, 3, t14, 1u, 0u);
                t16 = g->ecx;
                eax = t15;
                ecx = t16;
                edi = 0u;
            }
            t17 = rd32(arg1 + 0x46cu);
            g->esp = sp0 - 8u;
            cow_thiscall(g, rd32(COW_IMG(0x103291ccu)), ecx, 1, t17);
        }
    }
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d8c60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d8c60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
