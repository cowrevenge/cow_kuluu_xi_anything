/* f_0x102e70d7 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Opens a file (wide or ANSI depending on OS version and flag), maps it, and stores the file/mapping/view/size in the caller-supplied structure.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102e70d7(Guest* g, uint32_t self, uint32_t filename, uint32_t flag)
{
    if (filename == 0u)
    {
        return 0x8876086cu;
    }

    if (flag != 0u)
    {
        /* OSVERSIONINFOA local at [ebp - 0x28] == [sp0 - 0x9c] */
        const uint32_t osvi = cow_frame(g, g->esp, 0x9cu);
        wr32(osvi, 0x94u);

        cow_stdcall(g, rd32(COW_IMG(0x103291a8u)), 1u, osvi);

        /* dwPlatformId is at offset 0x10 in OSVERSIONINFOA */
        if (rd32(osvi + 0x10u) != 2u)
        {
            const uint32_t wctmb = rd32(COW_IMG(0x10329154u));

            uint32_t len = cow_stdcall(
                g,
                wctmb,
                8u,
                0u,
                0u,
                filename,
                0xFFFFFFFFu,
                0u,
                0u,
                0u,
                0u
            );

            /*
             * Original:
             *   mov [ebp + 0x6c], eax
             *   add eax, 3
             *   and eax, 0xfffffffc
             *   call 0x10312190
             *   mov [ebp + 0x7c], esp
             *
             * 0x10312190 is the MSVC alloca helper.  At this point the
             * original esp is sp0 - 0xa8, and the allocated buffer begins
             * at esp after the alloca.
             */
            const uint32_t aligned = (len + 3u) & 0xfffffffcu;
            const uint32_t buf = (g->esp - 0xa8u) - aligned;

            cow_stdcall(
                g,
                wctmb,
                8u,
                0u,
                0u,
                filename,
                0xFFFFFFFFu,
                buf,
                len,
                0u,
                0u
            );

            filename = buf;
            flag = 0u;
        }
    }

    uint32_t handle;
    if (flag != 0u)
    {
        handle = cow_stdcall(
            g,
            rd32(COW_IMG(0x1032924cu)),
            7u,
            filename,
            0x80000000u,
            1u,
            0u,
            3u,
            0x10000000u,
            0u
        );
    }
    else
    {
        handle = cow_stdcall(
            g,
            rd32(COW_IMG(0x103291ecu)),
            7u,
            filename,
            0x80000000u,
            1u,
            0u,
            3u,
            0x10000000u,
            0u
        );
    }

    wr32(self, handle);

    if (handle != 0xFFFFFFFFu)
    {
        uint32_t mapping = cow_stdcall(
            g,
            rd32(COW_IMG(0x10329248u)),
            6u,
            handle,
            0u,
            2u,
            0u,
            0u,
            0u
        );

        wr32(self + 4u, mapping);

        if (mapping != 0xFFFFFFFFu)
        {
            uint32_t view = cow_stdcall(
                g,
                rd32(COW_IMG(0x10329244u)),
                6u,
                mapping,
                4u,
                0u,
                0u,
                0u,
                0u
            );

            wr32(self + 8u, view);

            if (view != 0u)
            {
                uint32_t size = cow_stdcall(
                    g,
                    rd32(COW_IMG(0x103291e8u)),
                    2u,
                    handle,
                    0u
                );

                wr32(self + 0xcu, size);

                if (size != 0xFFFFFFFFu)
                {
                    return 0u;
                }
            }
        }
    }

    cow_stdcall(g, rd32(COW_IMG(0x10329168u)), 0u);
    return 0x88760b59u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e70d7(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;
    const uint32_t saved_ebp = g->ebp;

    const uint32_t self = g->ecx;
    const uint32_t filename = rd32(sp0 + 4u);
    const uint32_t flag = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_102e70d7(g, self, filename, flag);

    g->esp = sp0;
    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->ebp = saved_ebp;

    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
